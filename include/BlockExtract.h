#pragma once
#include <string>
#include <vector>
#include <dirent.h>
#include <cstring>
using namespace std;
class BlockExtract
{
public:
    void extractSourceFile(const string &filePath, vector<string>& files, string format);
};

