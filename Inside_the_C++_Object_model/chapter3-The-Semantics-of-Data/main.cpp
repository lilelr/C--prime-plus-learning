//
// Created by YuXiao on 4/8/18.
//

#pragma pack(2)
#include <iostream>

using namespace std;

class X{};
class X1{};
class Y :public virtual X {};
class Z: public virtual X {};
class A: public Y, public  Z{};
class B: public Y {};
class C: public X{};
class D: public Y, public X1{};
class E: public virtual X, public virtual X1{};

int main(){
    cout<< "char * "<<sizeof(char *)<<endl;
    cout<< "X "<< sizeof(X)<<endl;
    cout<< "Y "<< sizeof(Y)<<endl;

    cout<<  "Z "<<sizeof(Z)<<endl;
    cout<< "A "<< sizeof(A)<<endl;
    cout<< "B "<< sizeof(B)<<endl;
    cout<< "C "<< sizeof(C) <<endl;
    cout<<  "D "<<sizeof(D)<<endl;
    cout<< "E "<< sizeof(E)<<endl;

    cout<<"size of double "<< sizeof(double)<<endl;
//    double a[10] = {0};
////    double b[1024*1024]={0};
////    a[1000] = b[1000*1000] = 1;
//    return 0;
}