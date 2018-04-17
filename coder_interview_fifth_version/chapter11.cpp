//
// Created by YuXiao on 4/17/18.
//

#include <iostream>

using namespace std;

class A{
protected:
    int m_data;
public:
    A(int data =0){
        m_data = data;
    }
    
    int Get_data(){
        return doGetData();
    }
    
    virtual int doGetData(){
        return m_data;
    }
    
};

class B:public A{
protected:
    int m_data;
public:
    B(int data=1){
        m_data = data;
    }
    
    int doGetData(){
        return m_data;
    }
};

class C: public B{
protected:
    int m_data;

public:
    C(int data=2){
        m_data = data;
    }
};

int main(){
    C c(10);
    cout<<c.Get_data()<<endl;
    cout<<c.A::Get_data()<<endl;
    cout<<c.B::Get_data()<<endl;
    cout<<c.C::Get_data()<<endl;
    cout<<c.doGetData()<<endl;
    cout<< c.A::doGetData()<<endl;
    cout<< c.B::doGetData()<<endl;
    cout<< c.C::doGetData()<<endl;
    system("pause");
    return 0;
}