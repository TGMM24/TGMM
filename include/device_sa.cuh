#pragma once
#ifndef X_H
#define X_H
 
struct FiveTuple{
    int first_token;
    //int second_token;
    //int height;
    int first_lable;
    int second_lable;
    // FiveTuple() :first_token(), second_token(), height(), first_lable(), second_lable(){}
    // FiveTuple(int a,  int b, int c, int d, int e) :first_token(a), second_token(b), height(c), first_lable(d), second_lable(e){}
    FiveTuple() :first_token(), first_lable(), second_lable(){}
    FiveTuple(int a,  int d, int e) :first_token(a), first_lable(d), second_lable(e){}
    // bool operator < (const FiveTuple &cmp)const 
    // {
    //     if(first_lable == cmp.first_lable && second_lable == cmp.second_lable) {
    //         if(abs(first_token-cmp.first_token)<height || abs(second_token-cmp.second_token)<height) {
    //             return false;
    //         } else if(first_token != cmp.first_token){
    //             return first_token < cmp.first_token;
    //         } else {
    //             return second_token < cmp.second_token;
    //         }
    //     } else if(first_lable == cmp.first_lable){
    //         return second_lable > cmp.second_lable;
    //     } else {
    //         return first_lable > cmp.first_lable;
    //     }
        
    // }
};

int device_sa(const unsigned char *data_in, int *sa_in, int n);
int device_sort(FiveTuple *ft_in, int n);
#endif