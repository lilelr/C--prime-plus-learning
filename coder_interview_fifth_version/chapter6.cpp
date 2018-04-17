
// Created by YuXiao on 4/17/18.
//
#include <iostream>
#include <cstdio>
#include <string>
#include <iomanip>
using namespace std;

class C{
public:
    C(int i):count_(i){

    }

    int incr() const{
            return ++count_;
    }

    int decr() const { // const function compile error if we deleted mutable
            return --count_;
    }


private:
    mutable int count_;
};

#define SECONDS_PER_YEAR (60*60*24*365)UL
int main(){
        int arr[10] = {1,2,3,4,5,6,7,8,9,10};
        cout<<*&arr[5]<<endl;
        cout<<*&arr[5] - 4<<endl;
//        printf("%ld",SECONDS_PER_YEAR);
//        cout<<*&arr[5] - 4 =6 <<endl; // 编译出错

        C c1(0),c2(1);
        cout<<endl;
        for(int tmp,i=0;i<10;i++){
                tmp = c1.incr();
                cout<<setw(tmp)<<setfill(' ')<<tmp<<endl;
                tmp = c2.decr();
                cout<<setw(tmp)<<setfill(' ')<<tmp<<endl;
        }
        return 0;
}
