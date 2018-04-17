
// Created by YuXiao on 4/17/18.
//
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

struct Test{
    Test(int){}

    Test(){}

    void fun(){}
};

class Base{
private:
    int m_i;
    int m_j;
public:
    Base(int i):m_j(i),m_i(m_j){

    }

    Base():m_j(0),m_i(m_j){

    }

    int get_i(){
        return m_i;
    }

    int get_j(){
        return m_j;
    }
};

class A{
public:
    const int size_a=9;
};

class B{
private:
    int data;
public:
    B(){
        cout<<"default constructor"<<endl;
    }
    B(const B& b){
        cout<<"copy constructor"<<endl;
    }

    B(int i):data(i){
        cout<<"constructed by parameter "<<data<<endl;
    }
    ~B(){
        cout<<"destructed "<<endl;
    }
};

B play(B b){
    return b;
}
int main(){
        Test a(1);
    a.fun();
    Test b(); // 声明了一个函数
//    b.fun(); // compile error

    Base obj(98);
    A c;
    cout<<"obj.get_i  "<<obj.get_i()<<endl;
    cout<<"obj.get_j  "<<obj.get_j()<<endl;
    cout<<c.size_a<<endl;
    B temp = play(5);
}
