#include <string>
#include <vector>
#include <dirent.h>
#include <cstring>
#include <iostream>
#include "JavaExtract.h"

using namespace std;

void JavaExtract::extractSourceFile(const string &root, vector<string>& files, string format) {
    DIR *pDir; //指向根目录结构体的指针
    struct dirent *ptr; //dirent结构体指针，具体结构看开头的注释
    // 使用dirent.h下的opendir()打开根目录，并返回指针
    if (!(pDir = opendir(root.c_str()))) {
        return;
    }
    // 使用dirent.h下的readdir逐个读取root下的文件
    //int cnt  = 0;
    while ((ptr = readdir(pDir)) != nullptr) {
        //if(cnt > 30000) break;
        // 这里我理解他的指针应该是自动会指向到下一个文件，所以不用写指针的移动
        string sub_file = root + "/" + ptr->d_name; // 当前指针指向的文件名
        if (ptr->d_type != 8 && ptr->d_type != 4) { // 递归出口，当不是普通文件（8）和文件夹（4）时退出递归
            return;
        }
        // 普通文件直接加入到files
        if (ptr->d_type == 8) {
            // 相当于将命令下使用ls展示出来的文件中除了. 和 ..全部保存在files中
            // 当然下面可以写各种字符串的筛选逻辑，比如只要后缀有.jpg图片
            if (strcmp(ptr->d_name, ".") != 0 && strcmp(ptr->d_name, "..") != 0) {
                if (strstr(ptr->d_name, format.c_str())) {
                    files.push_back(sub_file);
                    //cnt++;
                }
            } // 当前文件为文件夹(4)类型，那就以当前文件为root进行递归吧！
        } else if (ptr->d_type == 4) {
            if (strcmp(ptr->d_name, ".") != 0 && strcmp(ptr->d_name, "..") != 0) {
                extractSourceFile(sub_file, files, format);
            }
        }
    }
    // 关闭根目录
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