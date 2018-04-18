
// Created by YuXiao on 4/17/18.
//
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

// wrong
void get_memory(char *p, int num) {
    p = (char *) malloc(sizeof(char) * num);
}

// right
void get_memory(char **p, int num) {
    *p = (char *) malloc(sizeof(char) * num);
}

char *strA() {
    char str[] = "hello world";
    return str;
}

const char *strB() {
    char *str = "hello world";
    return str;
}

class A {
public:
    A() {
        m_a = 1;
        m_b = 2;
    }

    ~A() {};

    void fun() {
        printf("%d%d", m_a, m_b);
    }

    int m_a;
    int m_b;
};

class B {
public:
    B() {
        m_c = 3;
    }

    ~B() {};

    void fun() {
        printf("%d", m_c);
    }

public:
    int m_c;
};

struct S {
    int i;
    int *p;
};

int my_max(int x, int y) {
    return x > y ? x : y;
}

int main() {

    int my_max(int, int);
    int (*hanp)(int, int) = &my_max;


    char *str = nullptr;
    get_memory(&str, 100);
    strcpy(str, "hello");  // if get_memory(str,100) 运行时报错

    char *a = strA();
    cout << a << endl; // 输出空，因为 hello world 随栈弹出被释放掉了

    const char *b = strB();
    cout << b << endl;//输出空，因为 hello world

    A a1;
    B *pb1 = (B *) (&a1);
    printf("%08x\n", &a1);
    printf("%08x\n", &(a1.m_a));
    printf("%p\n", &A::m_a);
    printf("%p\n", &A::m_b);
    printf("%p\n", &B::m_c);
    pb1->fun();

    printf("\n");
    S s;
    int *p = &s.i;
    p[0] = 6;
    p[1] = 5;
    printf("%d\n", p[0]);
    printf("%d\n", s.i);
    printf("%08x  %08x\n", &p[0], &s.i);
    printf("%d %08x\n", p[1], s.p);
    printf("%08x  %08x %08x\n", &p[1], &s.p, &s.p[1]);

    const char *strp = "Hello world!\n";
    const char *const *keywords;
    keywords = &strp;
    const char *strp2 = "end\n";
    printf("%s\n", *keywords);
    keywords = &strp2;

    printf("%s\n", *keywords);

    float (**def)[10];// 是一个二级指针，指向的是一个一维数组的指针，float(* ref)[10], 数组的元素都是float
    double *(*gh)[10]; // 是一个指针，指向的是一个一维数组，数组元素是 double*
    double (*f[10])(); // f 是一个数组， f有10个元素，元素都是函数指针，指向的函数类型是没有参数而且返回double 的函数。
    int *((*g)[10]); //和int* (*g)[10] 一样，是一个一维数组的指针， 数组元素是int*

    int (*(*h)(int, int))(int); // h 是一个函数指针，所指向的函数的输入参数是两个int，该函数返回一个函数指针a, a的输入参数是一个int, 返回值是一个 int

    int vb[10] = {1,2,3,4,5,6,7,8,9,10}; // vb int[10]
    int (*vp)[10] = &vb; // vp 是一个一维数组的指针，数组元素是 int， &vb 不是对vb 取地址，而是使得 类型int[10]变成 int*[10]

    printf("%d\n",**vp); // *vp int[10] **vp vb[0]
    printf("%08x  %08x, %08x,%08x\n",*vp,&vb[0],vb,&vb); // *vp = vb =&vb = &vb[0]

    int va[2][10] = {{1,2,3,4,5,6,7,8,9,10}, {11,12,13,14,15,16,17,18,19,20}};
    int (*vp1)[10] = va;
    printf("%s\n",typeid(va).name());
    printf("%s\n", typeid(vp1).name());
    // 数组名本身就是指针，再加个&, 就变成双指针了，这里的双指针就是指二维数组，加1， 就是数组整体加一行
    printf("%d\n",**vp1);
    printf("%d\n",**(vp1+1));
    printf("%d\n",*(*vp1+1));
    printf("%d\n",*(vp1[0]+1));
    printf("%d\n",*(vp1[1]));

    typedef unsigned short int USHORT;
    USHORT * pInt = new USHORT;
    *pInt = 10;
    printf("%d\n",*pInt);
    delete pInt;
    pInt = 0;
    long * pLong = new long;
    *pLong =90000;
//    printf("%ld\n",*pLong);
//    *pInt = 20; // bad address , runtime error
//    printf("%d\n",*pInt);
//    printf("%ld\n",*pLong);
//    delete pLong;

    char* strp1[] = {"hello","the","world"};
    char** pastr = strp1;
    pastr++;
    printf("%s\n",*pastr);
    return 0;
}
