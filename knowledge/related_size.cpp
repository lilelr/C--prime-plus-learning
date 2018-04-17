#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
//#pragma pack(4)
// 对齐方法
class A3{
public:   // 偏移从0开始
    double d; // 8
    float a;   // 4 12能整除4
    int b;     // 4 16 能整除4 和 8
    char c;   // 1 17 最后针对8对齐，方便结构体数组寻址，17 以 整除8对齐， 24
    A3();
    ~A3();
};

class A4{ //16
public:
    double d;
    float a;
    int b;
    A4();
    ~A4();
};

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

struct H{
    short a;
    short b;
    short c;
};

struct I{
    long a1;
    short a2;
};
struct K{
    short a1;
    short a2;
    long a3;
};

struct L{
    char a0;
    short a1;
    short a2;
    int a4;
    long a3;

};

class A1{
public:
    int a;
    static int b;
    A1();
    ~A1();
};
class A2{
public:
    int a;
    char c;
    A2();
    ~A2();
};

// sizeof 计算栈中分配的大小，静态变量是存放在全局数据区中，而sizeof 计算栈中分配的大小，是不会计算在内的

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
    cout<<"sizeof H:"<< sizeof(H)<<endl;
    cout<<"sizeof I:"<< sizeof(I)<<endl;
    cout<<"sizeof J:"<< sizeof(long)<<endl;
    cout<<"sizeof K:"<<sizeof(K)<<endl;
    cout<<"sizeof L:"<<sizeof(L)<<endl;

    cout<<"sizeof A1:"<< sizeof(A1)<<endl;
    cout<<"sizeof A2:"<< sizeof(A2)<<endl;
    cout<<"sizeof A3:"<< sizeof(A3)<<endl;
    cout<<"sizeof A4:"<< sizeof(A4)<<endl;

    char* ss1 = "0123456789";
    char ss2[] = "0123456789";
    char ss3[100] = "0123456789";
    int ss4[100];
    char q1[] = "abc";
    char q2[] = "a\n";
    char* q3 = "a\n";
    char *str1 = (char *)malloc(100);
    void *str2 = (void *)malloc(100);
    cout<<endl;
    cout<<"sizeof ss1: "<< sizeof(ss1)<<endl;
    cout<<"sizeof ss2: "<< sizeof(ss2)<<endl;
    cout<<"sizeof ss3: "<< sizeof(ss3)<<endl;
    cout<<"sizeof ss4: "<< sizeof(ss4)<<endl;
    cout<<"sizeof q1: "<< sizeof(q1)<<endl;
    cout<<"sizeof q2: "<< sizeof(q2)<<endl;
    cout<<"sizeof q3: "<< sizeof(q3)<<endl;
    cout<<"sizeof str1: "<< sizeof(str1)<<endl;
    cout<<"sizeof str2: "<< sizeof(str2)<<endl;

    int** m[3][4];
    cout<<"sizeof int**m[3][4] "<< sizeof(m)<<endl;
    return 0;
}