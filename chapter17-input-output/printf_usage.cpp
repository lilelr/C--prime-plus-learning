#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    float x = (float)102.1;
    printf("%6.2f\n", x);
    printf("%6.2f%6.2f\n", x,x);
    printf("%9.2f%9.2f\n", x,x);
    printf("%-9.2f%-9.2f\n", x,x);
    printf("%09.2f\n", x);
    printf("%09.2f%09.2f\n", x,x);

    getchar();
}

//结果：
//102.10
//102.10102.10
//102.10 102.10
//102.10 102.10
//000102.10
//000102.10000102.10