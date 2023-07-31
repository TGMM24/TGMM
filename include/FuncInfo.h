#ifndef FUNCINFO_H
#define FUNCINFO_H
#include <iostream>
#include <vector>
class FuncInfo {
  public:
    short startLine;
    short endLine;
    int funcID;
    int astNodeNum;
    std::string funcPath;
    FuncInfo();
    // file level
    FuncInfo(std::string path);
    // function level
    FuncInfo(std::string path, short startLine, short endLine, int astNodeNum);
    short getFuncLen(void);
  private:
    static int funcCount;
};

#endif
