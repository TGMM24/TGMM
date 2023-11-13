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
    while ((ptr = readdir(pDir)) != nullptr) {
        string sub_file = root + "/" + ptr->d_name; 
        if (ptr->d_type != 8 && ptr->d_type != 4) { 
            return;
        }
        if (ptr->d_type == 8) {
            if (strcmp(ptr->d_name, ".") != 0 && strcmp(ptr->d_name, "..") != 0) {
                if (strstr(ptr->d_name, format.c_str())) {
                    files.push_back(sub_file);
                }
            }
        } else if (ptr->d_type == 4) {
            if (strcmp(ptr->d_name, ".") != 0 && strcmp(ptr->d_name, "..") != 0) {
                extractSourceFile(sub_file, files, format);
            }
        }
    }
    closedir(pDir);
}
