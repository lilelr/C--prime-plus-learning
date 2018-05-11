//
// Created by YuXiao on 4/18/18.
//
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

char* my_strcpy(char* str_dest, char* str_src){
    char* address = str_dest;
    for(;*str_src!='\0';str_src++){
        *str_dest = *str_src;
        str_dest++;
    }
    *str_dest='\0';
    return address;
}

#define MAX_LEN 1000
void loop_move(char *pstr, int steps){
    int  n = strlen(pstr) - steps;
    char tmp[MAX_LEN];
    memcpy(tmp, pstr+n,steps);
    memcpy(pstr+steps,pstr,n);
    memcpy(pstr,tmp,steps);
}

void test1(){
    char t_str[11];
    char* t_str2="0123456789";
    strcpy(t_str,t_str2);
    cout<<endl;
    cout<<t_str<<'\n';
//    cout<<t_str[10]<<endl;
};

void test2(){ // 编译通过，运行时会出错 字符数组的初始化要求最后一个字符必须为'\0'
    char t_str[10], t_str2[10];
    for(int i=0;i<10;i++){
        t_str2[i] = 'a';
    }
    strcpy(t_str, t_str2);
    cout<<t_str<<'\n';
}

int main(){
    char s[] = "123456789";
    char d[] = "123";
    strcpy(d,s);
    printf("%s,\n%s",d,s);
    char str[2][3] = {"a","b"};
   // char str2[2] = {"a","b"};// compile info : excess elements in initializer

    char str3[2][3] = {{'a','b'},{'e','d'}}; // right
   // char str3[2][3] = {{'a','b'},{'e','d'},{'e','f'}};// wrong ,compile error

    test1();
    test2();
}