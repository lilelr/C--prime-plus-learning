
// Created by YuXiao on 4/17/18.
//
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int i = 1;

void conversion() {
    int ival = 1;
    double dval = 3.14159;
    int *pi = 0;
    ival = dval;
    cout << ival << endl;
    cout << dval << endl;
}

void foundation_type_conversion() {
    int i = i;
    cout << i << endl;
    float a = 1.0f;
    cout << (int) a << endl;
    cout << &a << endl;
    cout << (int &) a << endl;
    cout << boolalpha << ((int) a == (int &) a) << endl;

    float b = 0.0f;
    cout << (int) b << endl;
    cout << &b << endl;
    cout << (int &) b << endl;
    cout << boolalpha << ((int) b == (int &) b) << endl;

    unsigned int c = 0XFFFFFFF7;
    unsigned char d = (unsigned char) c;
    char *e = (char *) &c;
    cout << endl;
    printf("%08x ", d);
    cout << endl;
    // 　%08x是指按16进制以小写符号输出最小为8位的v1的地址。
    printf("%08x", *e);
    cout << endl;
}

void operator_character() {
    unsigned char a = 0xA5;
    unsigned char b = ~a >> 4 + 1;
    printf("b=%d\n", b);
}

void bit_operation() {

}

int f_bit_average(int x, int y) {
    return (x & y) + (x ^ y) >> 1;
}

bool fun_max(int a, int b) {
    return a > b;
}

int compare_max(int a, int b) {
    bool flag = fun_max(a, b);
    return flag * a + (1 - flag) * b;
}

// 按位异或运算交换两个整数的值
// 采用内存交换交换两个数据的值
void my_swap(double a, double b) {
    char tempBuf[10];
    memcpy(tempBuf, &a, sizeof(a));
    memcpy(&a, &b, sizeof(b));
    memcpy(&b, tempBuf, sizeof(tempBuf));

}


int bit_add(int a, int b) {
    if (b == 0) return a;
    int sum, carry;
    sum = a ^ b;
    carry = (a & b) << 1;
    return bit_add(sum, carry);
}

void my_switch(){
    int n = 'c';
    switch (++n){
        default:printf("error"); break;
        case 'a': case 'A': case 'b': case 'B': printf("ab"); break;
        case 'c': case 'C': printf("c");
        case 'd': case 'D': printf("d");
    }
}

int main() {

    conversion();
    operator_character();
    my_switch();
}
