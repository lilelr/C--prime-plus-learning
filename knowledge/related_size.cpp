#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
#pragma pack(4)


class A {
    int i;
    union U {
        char tqh[13];
        int i;
    }u;
    void func() { cout << "庚午步雲" << endl; }
    typedef char* (*f)(void*);
    enum{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday} week;
}a;

class B {
    int i;

}b;

class C {
    int i;
    union U {
        char tqh[13];
        int i;
    }u;

};

class D{
    int i;
    union U{
        char tqh[13];
        int i;
    }u;
    void func() { cout << "李乐乐" << endl; }
};

class E{
    int i;
    union U{
        char tqh[13];
        int i;
    }u;
    void func() { cout << "李乐乐" << endl; }
    typedef char* (*f)(void*);
};

int checkCPU(){
        union check{
            int a;
            char b;
        }temp;
       temp.a=1;
    return temp.b == 1;
}

struct F{
    char a;
    int b;
    short c;
};

int main(){
    int ans_size_A = sizeof(A);
    cout<<"sizeof A: "<<ans_size_A<<endl;
    cout<<"sizeof B: "<< sizeof(B)<<endl;
    cout<<"sizeof C: "<< sizeof(C)<<endl;
    cout<<"sizeof D: "<< sizeof(D)<<endl;
    cout<<"sizeof E: "<< sizeof(E)<<endl;

    cout<<"machine point "<<checkCPU()<<endl;

    cout<<"sizeof F: "<< sizeof(F)<<endl;
    cout<<"sizeof G:"<< sizeof("abcde")<<endl;

    return 0;
}