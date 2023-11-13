#include <map>
#include <list>
#include <vector>
#include <mutex>
#include <iostream>
#include "FuncInfo.h"
#include "AllData.h"


using namespace std;

map<int, FuncInfo> allFunctions;
int suffixLen = 100000000;
list<vector<unsigned char> > allConcatedString;
vector<unsigned char> curConcatedString;
int curCSEndIndex;
int minTokenNum = 50;
list<vector<int> > allTokenFileID;
vector<int> curTokenFileID;


int yushu = 253;
mutex mtx;
AllData::AllData() {
    curCSEndIndex = 0;
}
