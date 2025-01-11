#include <iostream>
#include <map>
#include <list>
#include <time.h>
#include <thread>
#include <chrono>
#include <set>
#include <fstream>
#include <mutex>
#include <sstream>
#include <algorithm>
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "BlockExtract.h"
#include "AllData.h"
#include "FuncInfo.h"
#include "PreProcess.h"
#include "device_sa.cuh"
using namespace std;
using namespace chrono;

#define NUM_THREADS     60
#define MIN_OVERLAP     40
#define MCC     20
#define FT_LEN  1000000000
#define SIM 0.6
#define SCAN_LEN 200
std::hash<std::string> hashFunc;
AllData allData();
extern map<int, FuncInfo> allFunctions;
extern int suffixLen;

extern list<vector<unsigned char> > allConcatedString;
extern vector<unsigned char> curConcatedString;
extern list<vector<int> > allTokenFileID;
extern vector<int> curTokenFileID;
extern int curCSEndIndex;

mutex mainMtx;
map<int, set<int>> notAstClonePairs;
vector<int> MC_Token_vector(2*suffixLen);
set<int> cloneFileSet;
set<int> cloneFuncSet;
int cloneLineNum = 0;
int totalLineNum = 0;
int totalFileNum = 0;

struct Pair{
    int a;
    int b;
};

bool mycom(const Pair x,const Pair y)
{
    if(x.a==y.a)
        return x.b>y.b;
    return x.a>y.a;
}

int getClonePairNum(int len) {
    Pair pairs[len];
    int idx = 0;
    for(auto iter = notAstClonePairs.begin(); iter != notAstClonePairs.end(); iter++) { 
        int f_id = iter->first;
        set<int> tmpSet = iter->second;
        for (int s_id : tmpSet) { 
            if(f_id > s_id) {
                pairs[idx].a = s_id;
                pairs[idx].b = f_id;
            } else {
                pairs[idx].b = s_id;
                pairs[idx].a = f_id;
            }
            idx++;
        }
    }
    sort(pairs, pairs+idx, mycom);
    int res = 0;
    for (int i = 1; i < idx; i++)
    {
        if(pairs[i].a == pairs[i-1].a && pairs[i].b == pairs[i-1].b) continue;
        res++;
    }
    return res;
}
 
struct Timer{
	size_t start;
	Timer(){
		reset();
	}
	void reset(){
		start = clock();
	}
	double elapsed(){
		return ((double)clock() - start) / CLOCKS_PER_SEC;
	}
	void printElapsed(char * label){
		cout << label << ": " << elapsed() << "s\n";
	}
};

bool comp(const FiveTuple a, const FiveTuple b) {
	if(a.first_lable == b.first_lable && a.second_lable == b.second_lable) {
		return a.first_token < b.first_token;
	} else if(a.first_lable == b.first_lable) {
		return a.second_lable > b.second_lable;
	} else {
		return a.first_lable > b.first_lable;
	}
};

int parseLine(char* line){
    // This assumes that a digit will be found and the line ends in " Kb".
    int i = strlen(line);
    const char* p = line;
    while (*p <'0' || *p > '9') p++;
    line[i-3] = '\0';
    i = atoi(p);
    return i;
}

int getVirMem(){ //Note: this value is in KB!
    FILE* file = fopen("/proc/self/status", "r");
    int result = -1;
    char line[128];

    while (fgets(line, 128, file) != NULL){
        if (strncmp(line, "VmSize:", 7) == 0){
            result = parseLine(line);
            break;
        }
    }
    fclose(file);
    return result;
}

int getPhyMem(){ //Note: this value is in KB!
    FILE* file = fopen("/proc/self/status", "r");
    int result = -1;
    char line[128];

    while (fgets(line, 128, file) != NULL){
        if (strncmp(line, "VmRSS:", 6) == 0){
            result = parseLine(line);
            break;
        }
    }
    fclose(file);
    return result;
}

void printMemConsume() {
    int virMem = getVirMem();
    int phyMem = getPhyMem();
    printf("virtual memory consume: %d KB\n", virMem);
    printf("physical memory consume: %d KB\n", phyMem);
}


int min(int a, int b) {
    return a<b?a:b;
}


void getTokenMCVector(vector<unsigned char>& token_data, int curSize) {
    
    for (size_t i = 0; i < curSize-MCC+1; i++)
    {
        int v = 0;
        for (size_t j = 0; j < MCC; j++)
        {
            v += (int)token_data[i+j] * ((j<<1) + 1);
        }
        MC_Token_vector[i] = v;
    }
    for (size_t i = curSize-MCC+1; i < curSize; i++)
    {
        int v = 0;
        for (size_t j = i; j < curSize; j++)
        {
            v += (int)token_data[j] * (((j-i)<<1) + 1);
        }
        MC_Token_vector[i] = v;
    }
    
}

void getFTFromSA(vector<unsigned char>& token_data, vector<int>& token_label, vector<int>& sa, int s, int e, int& cntt, vector<FiveTuple>& ft, int sa_len) {
    for (int i = s; i < e; i++) {
        int s1 = sa[i];
        int s1_label = token_label[s1];
        //排除填充项0的影响
        if(s1_label == 0 || s1+MCC > sa_len || s1_label !=token_label[s1+MCC]) continue;
        for (int k=i+1; k < min(sa_len, i+SCAN_LEN); k++) {
            int s2 = sa[k];
            int s2_label = token_label[s2];
            if (s2_label==0 || s1_label == s2_label || s2_label !=token_label[s2+MCC] || s2+MCC>sa_len) 
                continue;
        
            if(MC_Token_vector[s1] == MC_Token_vector[s2]) {
                FiveTuple tempFt;
                tempFt.first_token = s1;
                tempFt.first_lable = token_label[s1];
                tempFt.second_lable = token_label[s2];
                mainMtx.lock();
                ft[cntt] = tempFt;
                cntt++;
                mainMtx.unlock();
            } else {
                break;
            } 
        }
        
    }
}

void convertFT2ClonePair(vector<FiveTuple> &ft, int s, int e) {
    int start_pos = -1, temp_len = 0, first_ = -1, second_ = -1;
    for (int i=s; i < e; i++)
    {
        if(ft[i].first_lable == first_ && ft[i].second_lable == second_) {
            if(ft[i].first_token - start_pos < MCC) {
                temp_len += ft[i].first_token - start_pos;
            } else {
                temp_len += MCC;
            }
            start_pos = ft[i].first_token;
        } else {
            if (temp_len >= MIN_OVERLAP) {
                short maxLen = 30000;
                maxLen = max(allFunctions[first_].astNodeNum, allFunctions[second_].astNodeNum);

                double overlapSim = 1.0*temp_len/maxLen;
                mainMtx.lock();
                if(overlapSim > SIM) {  //similarity score
                    notAstClonePairs[first_].insert(second_);
                }
                mainMtx.unlock();
            }
            start_pos = ft[i].first_token;
            temp_len = MCC;
            first_ = ft[i].first_lable;
            second_ = ft[i].second_lable;
        }
    }
}

void oneGroupCudaCloneDetect(vector<unsigned char>& tempCanString, vector<int>& tempLabel, int sa_len){
    vector<int> sa(sa_len);
    vector<FiveTuple> ft(FT_LEN);
    device_sa(tempCanString.data(), sa.data(), sa_len);
    int cntt = 0;
    thread ftThreads[NUM_THREADS];
    int divFTs = (sa.size()+NUM_THREADS-1)/NUM_THREADS;
    for (int i = 0; i < NUM_THREADS; i++)
    {
        ftThreads[i] = thread(getFTFromSA, ref(tempCanString), ref(tempLabel), ref(sa), i*divFTs, min((i+1)*divFTs, sa_len), ref(cntt), ref(ft), sa_len);
        //cout<<"start at:" << i*divFTs << "; end at:" <<  min((i+1)*divFTs, sa_len) << endl;
    }
    
    for (auto &thread1 : ftThreads)
        thread1.join();
    cout<<"cpu five tuple size:"<<cntt<<endl;
    device_sort(ft.data(), cntt);

    // for (int i = 0; i < 100; i++)
    // {
    //     cout <<ft[i].first_token<<" "<<ft[i].second_token<<" "<<ft[i].height<<" "<<ft[i].first_lable << " " <<ft[i].second_lable << endl;
    // }

    // convert five tuple to clone pairs
    
    thread CloneThreads[NUM_THREADS];
    int divClone = (cntt+NUM_THREADS-1)/NUM_THREADS;
    for (int i = 0; i < NUM_THREADS; i++)
    {
        CloneThreads[i] = thread(convertFT2ClonePair, ref(ft), i*divClone, min((i+1)*divClone, cntt));
    }
    
    for (auto &thread1 : CloneThreads)
        thread1.join();
}

void multiGroupTokenCloneDetect(list<vector<unsigned char>>::iterator &sIter, list<vector<int> >:: iterator &firstLableIter) {
    int sa_len = suffixLen<<1;
    int loopCount = 0;
    for(; sIter != allConcatedString.end(); sIter++, firstLableIter++){
        loopCount++;
        printf("loopCount:%d\n", loopCount);
        vector<unsigned char> firstCanString = *sIter;
        vector<int> firstLable = *firstLableIter;

        list<vector<unsigned char>>::iterator twoSIter = allConcatedString.begin();
        list<vector<int> >:: iterator secondLabelIter = allTokenFileID.begin();
        advance(twoSIter, loopCount);
        advance(secondLabelIter, loopCount);
        for (;twoSIter != allConcatedString.end(); twoSIter++, secondLabelIter++)
        {
            vector<unsigned char> tempCanString(firstCanString);
            vector<int> tempLable(firstLable);
            vector<unsigned char> secondCanString = *twoSIter;
            vector<int> secondLable = *secondLabelIter;
            tempCanString.insert(tempCanString.end(), secondCanString.begin(), secondCanString.end());
            tempLable.insert(tempLable.end(), secondLable.begin(), secondLable.end());
            getTokenMCVector(tempCanString, tempCanString.size());
            oneGroupCudaCloneDetect(tempCanString, tempLable, sa_len);
        }
    }
    cout << "string group: " << loopCount << endl;
}


int main(int argc, char* argv[]){
    //printMemConsume();
    auto start = system_clock::now();
    // iniCloneLevelMap();
    string filePath = "";
    string cloneLV = "methodDeclaration";
    string outputPath = "./output/";
    string format = ".java";  
    if (argc == 5)
    {
        filePath = argv[1];
        cloneLV = argv[2];
        outputPath = argv[3];
        format = argv[4];
    } else if (argc > 1)
    {
        cout << "parameter number error" << endl;
        return 0;
    }
    
    
    vector<string> allFiles;
    JavaExtract je;
    je.extractSourceFile(filePath, allFiles, format);
    int files_num = allFiles.size();
    totalFileNum = files_num;
    ofstream outputFile;
    outputFile.open(outputPath+cloneLV+".txt");
    outputFile << "file num: " << files_num << endl;

    int divFileNum = (files_num + NUM_THREADS - 1) / NUM_THREADS;
    thread ppThreads[NUM_THREADS];  
    PreProcess pp[NUM_THREADS];
    for (int i = 0; i < NUM_THREADS; i++)
    {
        //C++thread
        ppThreads[i] = thread(&PreProcess::getJavaFuncLevelInfo, &pp[i], allFiles, i*divFileNum, min((i+1)*divFileNum, files_num), cloneLV);
        // cout<<"start at:" << i*divFileNum << "; end at:" <<  min((i+1)*divFileNum, files_num) << endl;
    }
    for (auto &thread1 : ppThreads)
        thread1.join();
    
    outputFile<< "all function or file number: " << allFunctions.size() << endl;

    vector<string>().swap(allFiles);

    auto end   = system_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    outputFile <<  "preprocess cost" 
        << double(duration.count()) * microseconds::period::num / microseconds::period::den 
        << "seconds" << endl;
    //printMemConsume();

    vector<unsigned char> copyVec(curConcatedString);
    copyVec.resize(suffixLen);
    allConcatedString.push_back(copyVec);
    int curTokenSize = curConcatedString.size();
    outputFile << "curConcatedString len " << curTokenSize << endl;
    vector<unsigned char>().swap(curConcatedString);

    vector<int> copyIDVec(curTokenFileID);
    copyIDVec.resize(suffixLen);
    allTokenFileID.push_back(copyIDVec);
    vector<int>().swap(curTokenFileID);

    curCSEndIndex = 0;
    //克隆检测
    Timer t;
    list<vector<unsigned char>>::iterator sIter = allConcatedString.begin();
    list<vector<int> >:: iterator firstLableIter = allTokenFileID.begin();

    if (allConcatedString.size() == 1)
    {
        getTokenMCVector(*sIter, curTokenSize);
        oneGroupCudaCloneDetect(*sIter, *firstLableIter, suffixLen); 
    } else {
        multiGroupTokenCloneDetect(sIter, firstLableIter);
    }

    
    char* cuda_suffix_array = (char*)"Cuda suffix array";
	t.printElapsed(cuda_suffix_array);


    

    ofstream dataFile;
	dataFile.open(outputPath+"allFunctions.csv", ios::out | ios::trunc);
    for(auto iter = allFunctions.begin(); iter != allFunctions.end(); iter++) {
        FuncInfo tmpFunction = iter->second;
        dataFile << tmpFunction.funcID << "," << tmpFunction.startLine << "," << tmpFunction.endLine<< "," << tmpFunction.funcPath <<endl;\
        totalLineNum += tmpFunction.getFuncLen();
    }
    dataFile.close();
    //统计大于0.6的clone对
    int tempPairNum = 0;
    for(auto iter = notAstClonePairs.begin(); iter != notAstClonePairs.end(); iter++) {
        tempPairNum += (iter->second).size();
    }
    //tempPairNum = getClonePairNum(tempPairNum);


    ofstream cloneFile;
	cloneFile.open(outputPath+"clonePairs.csv", ios::out | ios::trunc);
    for(auto iter = notAstClonePairs.begin(); iter != notAstClonePairs.end(); iter++) {
        set<int> tmpSet = iter->second;
        int f_id = iter->first;
        cloneFileSet.insert(hashFunc(allFunctions[f_id].funcPath));
        if(cloneFuncSet.find(f_id) == cloneFuncSet.end()) {
            cloneFuncSet.insert(f_id);
            cloneLineNum += allFunctions[f_id].getFuncLen();
        }
        for (int s_id : tmpSet) {
            cloneFile << f_id << "," << s_id << endl;
            cloneFileSet.insert(hashFunc(allFunctions[s_id].funcPath));
            if(cloneFuncSet.find(s_id) == cloneFuncSet.end()) {
                cloneFuncSet.insert(s_id);
                cloneLineNum += allFunctions[s_id].getFuncLen();
            }
        }
    }
    cloneFile.close();
    //printf("Clone Pairs Num: %d\n", tempPairNum);
    outputFile << "Clone Pairs Num: "<< tempPairNum << endl;
    //output clone info
    outputFile << "File originality rate: " <<1 - 1.0*cloneFileSet.size()/totalFileNum << endl;
    outputFile << "Code independence rate: " <<1 - 1.0*cloneLineNum/totalLineNum << endl;
    
    end   = system_clock::now();
    duration = duration_cast<microseconds>(end - start);
    outputFile <<  "cost " 
        << double(duration.count()) * microseconds::period::num / microseconds::period::den 
        << "seconds" << endl;
    outputFile.close();
    return 0;
}