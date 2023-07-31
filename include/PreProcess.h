#pragma once
#include <string>
#include <vector>
#include "FuncInfo.h"
#include <map>
using namespace std;

class PreProcess
{
private:
    /* data */
public:
    PreProcess(/* args */);
    void getJavaFuncLevelInfo(vector<string> filePath, int startIndex, int endIndex, string cloneLevelString);
    void getCFuncLevelInfo(vector<string> filePath, int startIndex, int endIndex, string cloneLevelString);
    void getCppFuncLevelInfo(vector<string> filePath, int startIndex, int endIndex, string cloneLevelString);
    void getCsharpFuncLevelInfo(vector<string> filePath, int startIndex, int endIndex, string cloneLevelString);
    void getGoFuncLevelInfo(vector<string> filePath, int startIndex, int endIndex, string cloneLevelString);
    void getJavascriptFuncLevelInfo(vector<string> filePath, int startIndex, int endIndex, string cloneLevelString);
    void getKoltinFuncLevelInfo(vector<string> filePath, int startIndex, int endIndex, string cloneLevelString);
    void getPython2FuncLevelInfo(vector<string> filePath, int startIndex, int endIndex, string cloneLevelString);
    void getPython3FuncLevelInfo(vector<string> filePath, int startIndex, int endIndex, string cloneLevelString);
    void getRustFuncLevelInfo(vector<string> filePath, int startIndex, int endIndex, string cloneLevelString);
    void getSolidityFuncLevelInfo(vector<string> filePath, int startIndex, int endIndex, string cloneLevelString);
    void getSwiftFuncLevelInfo(vector<string> filePath, int startIndex, int endIndex, string cloneLevelString);

};

