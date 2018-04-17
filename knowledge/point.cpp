//
// Created by YuXiao on 4/17/18.
//
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;


int main(){
    char b='e';
    const char*  a = &b;
//    const char*  const a = &b;
    cout<<*a<<endl;
    b='f';
    cout<<*a<<endl;
    char c='g';
    a = &c;
    cout<<*a<<endl;
//    *a='h';

    int d = 500;
    const int* e = &d;
    int const* f = &d;
    int* const g = &d;
    const int* const h = &d;
    // *e = 3; // read-only compile error
    // *f = 123; // read-only compile error
   // g++; // 指针本身是个常量, 不可以指向别的地方， compile error
    *g = 123;
    // int* const i; // compile 指针常量必须初始化
    
}
