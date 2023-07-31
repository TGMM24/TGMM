#include <iostream>
#include <antlr4-runtime.h>
#include <string>
#include <list>
#include <vector>
#include <map>
#include <mutex>
#include <queue>
#include "PreProcess.h"
#include "FuncInfo.h"
#include "JavaLexer.h"
#include "JavaParser.h"



using namespace std;
using namespace antlr4;
extern vector<unsigned char> curConcatedString;
extern int suffixLen;
extern list<vector<unsigned char> > allConcatedString;
extern int curCSEndIndex;
extern list<vector<int> > allTokenFileID;
extern vector<int> curTokenFileID;
extern map<int, int> edgeInfoMap;
extern map<int, FuncInfo> allFunctions;
extern mutex mtx;
extern int minTokenNum;
extern int yushu;


extern std::hash<std::string> hashFunc;
PreProcess::PreProcess(){}

class CustomErrorListener : public antlr4::BaseErrorListener {
public:
  void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line,
                   size_t charPositionInLine, const std::string &msg, std::exception_ptr e) override {
    // Ignore the syntax error and continue parsing
  }
};

void traverseParserTree(vector<string>& allNames, tree::ParseTree *tree, string cloneLevelString, string filePath, vector<Token *>& tokenArr) {
    queue<tree::ParseTree *> visitor;
    int methodHash = hashFunc(cloneLevelString);
    //int methodHash2 = hashFunc("methodDefinition");

    visitor.push(tree);
    while(!visitor.empty()) {
        tree::ParseTree *parNode = visitor.front();
        visitor.pop();
        antlr4::RuleContext *parIndex = dynamic_cast<antlr4::RuleContext *>(parNode);
        auto ri = parIndex->getRuleIndex();
        string parName = allNames[ri];
        int parHash = hashFunc(parName);
        // set<string> firstChildName;
        // firstChildName.insert("if");
        // firstChildName.insert("try");
        // firstChildName.insert("switch");
        if (parHash == methodHash) {
        
        //if (parHash==methodHash||parHash==methodHash2) {
            misc::Interval tempInterval = parNode->getSourceInterval();
            int sIndex = tempInterval.a;
            int eIndex = tempInterval.b;
            short startLine = tokenArr[sIndex]->getLine();
            short endLine = tokenArr[eIndex]->getLine();

            // filter the clone unit whose token is less than 50
            if (eIndex - sIndex + 1 < minTokenNum) continue;
            FuncInfo tempFunc(filePath, startLine, endLine, 0);
            int tempFuncID = tempFunc.funcID;
            vector<unsigned char> tempVec;
            vector<int> tempLabelVec;

            //preorder
            int tempASTNodeNum = 0;
            stack<tree::ParseTree*> stk;
            stk.emplace(parNode);
            while(!stk.empty()){
                tree::ParseTree *node = stk.top();
                stk.pop();
                if(node->children.size() == 0) {
                    misc::Interval interval = node->getSourceInterval();
                    int si = interval.a;
                    int pHash = tokenArr[si]->getType(); //normalized
                    // int pHash = hashFunc(node->getText()); // unnormalized
                    tempVec.push_back(pHash % yushu);
                    tempLabelVec.push_back(tempFuncID);
                    tempASTNodeNum += 1;
                } 
                // else if(node->children.size() == 1) {
                //     antlr4::RuleContext *pIndex = dynamic_cast<antlr4::RuleContext *>(node);
                //     // if (pIndex == nullptr) continue;
                //     auto _ri = pIndex->getRuleIndex();
                //     string pName = allNames[_ri];
                //     int pHash = hashFunc(pName);
                //     tempVec.push_back(pHash % yushu);
                //     tempLabelVec.push_back(tempFuncID);
                //     tempASTNodeNum += 1;
                // }
                
                for (auto it=node->children.rbegin(); it!=node->children.rend(); it++){
                    //if ((*it)->children.size() == 0) continue;
                    stk.emplace(*it);
                }
            }
            tempFunc.astNodeNum = tempASTNodeNum;

            mtx.lock();
            if(tempVec.size() + curCSEndIndex > suffixLen) {
                vector<unsigned char> copyVec(curConcatedString);
                copyVec.resize(suffixLen);
                allConcatedString.push_back(copyVec);
                curConcatedString.resize(0);
                curCSEndIndex = 0;
                vector<int> copyIDVec(curTokenFileID);
                copyIDVec.resize(suffixLen);
                allTokenFileID.push_back(copyIDVec);
                curTokenFileID.resize(0);
            }
            curConcatedString.insert(curConcatedString.end(), tempVec.begin(), tempVec.end());
            curTokenFileID.insert(curTokenFileID.end(), tempLabelVec.begin(), tempLabelVec.end());
            curCSEndIndex += tempVec.size();
            allFunctions[tempFuncID] = tempFunc;

            mtx.unlock();
        } else {
            for(tree::ParseTree *childNode : parNode->children){
                if(childNode->children.size() != 0) {               
                    visitor.push(childNode);
                }
            }
        } 
    }
}


void PreProcess::getJavaFuncLevelInfo(vector<string> allFilesPath, int startIndex, int endIndex, string cloneLevelString) {
    for (int i = startIndex; i < endIndex; i++)
    {   try
        {
            string filePath = allFilesPath[i];
            ifstream stream;
            stream.open(filePath);
            if(stream.is_open()) {
                ANTLRInputStream input(stream);
                JavaLexer lexer(&input);
                CommonTokenStream tokens(&lexer);
                tokens.fill();
                vector<Token *> tokenArr = tokens.getTokens();
                JavaParser parser(&tokens);
                parser.removeErrorListeners();
                CustomErrorListener errorListener;
                parser.addErrorListener(&errorListener);
                tree::ParseTree *tree = parser.compilationUnit();
                vector<string> allNames = parser.getRuleNames();
                traverseParserTree(allNames, tree, cloneLevelString, filePath, tokenArr);
                stream.close();
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            //exit(0);
        }
    }
}
