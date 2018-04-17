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
}
