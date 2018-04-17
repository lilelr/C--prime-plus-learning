//
// Created by YuXiao on 4/8/18.
//

#include <iostream>
#include <cstring>

using namespace std;

class Word{
public:
    Word(const char* s){
        str = new char[strlen(s)+1];
        strcpy(str,s);
        cnt = strlen(s) + 1;
    }

    ~Word(){

    }
    int cnt;
    char* str;
};


int main(){
   Word noun("book");
    Word verb = noun;
    cout<<verb.str<<endl;
    cout<<verb.cnt<<endl;

    cout<<" noun.str address"<<(unsigned long)(noun.str)<<endl;
    cout<<" verb.str address"<<(unsigned long)(verb.str)<<endl;

}