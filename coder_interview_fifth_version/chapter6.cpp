
// Created by YuXiao on 4/17/18.
//
#include <iostream>
#include <cstdio>
#include <string>
#include <iomanip>
#include <cstring>

using namespace std;

class C {
public:
    C(int i) : count_(i) {

    }

    int incr() const {
        return ++count_;
    }

    int decr() const { // const function compile error if we deleted mutable
        return --count_;
    }


private:
    mutable int count_;
};

#define SECONDS_PER_YEAR (60*60*24*365)UL

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << *&arr[5] << endl;
    cout << *&arr[5] - 4 << endl;
//        printf("%ld",SECONDS_PER_YEAR);
//        cout<<*&arr[5] - 4 =6 <<endl; // 编译出错

    C c1(0), c2(1);
    cout << endl;
    for (int tmp, i = 0; i < 10; i++) {
        tmp = c1.incr();
        cout << setw(tmp) << setfill(' ') << tmp << endl;
        tmp = c2.decr();
        cout << setw(tmp) << setfill(' ') << tmp << endl;
    }

    char ss[] = "0123456789";
    cout << "strlen ss=" << ss << " 为：" << strlen(ss) << endl;
    // strlen 的内部实现是用一个循环计算字符串的长度，直到"\0"为止
    char str[20] = "0123456789";
    cout << "str =0123456789, strlen(str)=" << strlen(str) << endl;
    cout << "str =0123456789, sizeof(str)=" << sizeof(str) << endl;

    int **d[3][4];
    int e, f, g, h;
    e=f=g=h=2;

    int *p[4] = {&e, &f, &g, &h};//中定义的p是有4整型指针的数组
    p[0] = &e;
    p[2] = &g;
    int (*q)[4];// q是指向具有4个整型元素的数组的指针!
    //q = {e,f,g,h};// 不可以，compile error
    //q = &e; // compile error int[4] *  和 int * is incompatible
    int i[4] = {4,3,2,1};
    q = &i;
    // q  =&f ;    // 不可以q 是  int（*）[4]，&f是int（*）[10];不兼容
    cout<<(*q)+1<<endl;
    cout<<(*q)[1]<<endl;
    return 0;
}
