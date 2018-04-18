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

int main(){
    char s[] = "123456789";
    char d[] = "123";
    strcpy(d,s);
    printf("%s,\n%s",d,s);
}