#include "FuncInfo.h"
#include <iostream>
int FuncInfo::funcCount = 0;

FuncInfo::FuncInfo(){}

FuncInfo::FuncInfo(std::string path){
    this->funcID = funcCount++;
    this->funcPath = path;
}

FuncInfo::FuncInfo(std::string path, short startLine, short endLine, int astNodeNum) {
    this->funcID = funcCount++;
    this->funcPath = path;
    this->startLine = startLine;
    this->endLine = endLine;
    this->astNodeNum = astNodeNum;
}

short FuncInfo::getFuncLen(){
    return endLine - startLine + 1;
}