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

class D{
public:
    void virtual f(){
        cout<<"A"<<endl;
    }
};

class E:public D{
public:
    void virtual f(){
        cout<<"E"<<endl;
    }
};
//sizeof(F):16  3 + 8
//sizeof(G):32   3 + 8 + 16 G 有一个虚类指针 指向其父类 F ,自然，sizeof（虚类指针） = sizeof(F)
//sizeof(H):48   3+8 +32
class F{
    char k[3];
public:
    virtual void aa(){};
};

class G: public virtual F{
    char j[3];
public:
    virtual void bb(){};
};

class H:public virtual G{
    char i[3];
public:
    virtual void cc(){};
};

//sizeof(I):16  只有public 虚函数统一放到虚函数表中，其他的私有变量，直接继承过来，当作本类的一部分
//sizeof(J):16   k[3] j[3] 3+3+8   16
//sizeof(K):24         3+3+3+8   24
class I{
    char k[3];
public:
    virtual void aa(){};
};

class J: public  I{
    char j[3];
public:
    virtual void bb(){};
};

class K:public  J{
    char i[3];
public:
    virtual void cc(){};
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

    D* pd = new D();
    pd->f();
    E* pe = (E*)pd;
    pe->f();

    delete pd,pe;
    pd = new E();
    pd->f();
    pe = (E*)pd;
    pe->f();

    cout<<"sizeof(F):"<< sizeof(F)<<endl;
    cout<<"sizeof(G):"<< sizeof(G)<<endl;
    cout<<"sizeof(H):"<< sizeof(H)<<endl;

    cout<<"sizeof(I):"<< sizeof(I)<<endl;
    cout<<"sizeof(J):"<< sizeof(J)<<endl;
    cout<<"sizeof(K):"<< sizeof(K)<<endl;
//    system("pause");
    return 0;
}