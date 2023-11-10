#include <string>
#include <vector>
#include <dirent.h>
#include <cstring>
#include <iostream>
#include "BlockExtract.h"

using namespace std;

void JavaExtract::extractSourceFile(const string &root, vector<string>& files, string format) {
    DIR *pDir; 
    struct dirent *ptr; 
    if (!(pDir = opendir(root.c_str()))) {
        return;
    }
    //int cnt  = 0;
    while ((ptr = readdir(pDir)) != nullptr) {
        //if(cnt > 30000) break;
        string sub_file = root + "/" + ptr->d_name; 
        if (ptr->d_type != 8 && ptr->d_type != 4) { 
            return;
        }
        // 普通文件直接加入到files
        if (ptr->d_type == 8) {
            if (strcmp(ptr->d_name, ".") != 0 && strcmp(ptr->d_name, "..") != 0) {
                if (strstr(ptr->d_name, format.c_str())) {
                    files.push_back(sub_file);
                    //cnt++;
                }
            } // 当前文件为文件夹(4)类型
        } else if (ptr->d_type == 4) {
            if (strcmp(ptr->d_name, ".") != 0 && strcmp(ptr->d_name, "..") != 0) {
                extractSourceFile(sub_file, files, format);
            }
        }
    }
    closedir(pDir);
}

// int main()
// {
//     string filePath = "/bdata/wyk/dataset/dataset/data1k/";
//     vector<string> files;
//     string format = ".java";             //查找文件的格式
//     JavaExtract je;
//     je.extractSourceFile(filePath, files,format);
//     int size = files.size();
//     for (int i = 0; i<size; i++)
//     {
//         cout << files[i] << endl;  //输出完整的文件路径和名称
//     }
//     return 0;
// }