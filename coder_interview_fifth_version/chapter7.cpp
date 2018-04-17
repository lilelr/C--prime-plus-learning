
// Created by YuXiao on 4/17/18.
//
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

// wrong
void get_memory(char* p, int num){
    p = (char*) malloc(sizeof(char)*num);
}

// right
void get_memory(char** p, int num){
    *p = (char*) malloc(sizeof(char)*num);
}

char* strA(){
    char str[] = "hello world";
    return str;
}

const char* strB(){
     char* str = "hello world";
    return str;
}

int main(){
    char* str = nullptr;
    get_memory(&str,100);
    strcpy(str,"hello");  // if get_memory(str,100) 运行时报错

    char* a= strA();
    cout<<a<<endl; // 输出空，因为 hello world 随栈弹出被释放掉了

    const char* b = strB();
    cout<<b<<endl;//输出空，因为 hello world
    return 0;
}
