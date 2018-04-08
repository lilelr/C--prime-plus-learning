//
// Created by YuXiao on 3/29/18.
//

#include <iostream>
using namespace std;
class Base{

};

class ChildA: public Base{

};

class ChildB: public  Base{
public:
    int b_a,b_b;
//    ChildB(int i):b_a(i),b_b(i--){
//        cout<<b_a<< "  "<<b_b<<endl;
//    }

//    ChildB(int i):b_a(i),b_b(++i){
//        cout<<b_a<< "  "<<b_b<<endl;
//    }

    ChildB(int i):b_a(b_b),b_b(++i){
        cout<<b_a<< "  "<<b_b<<endl;
    }
//    virtual void funB();

};

class ChildC: public Base{
public:
    int c;
    void funC(){
        cout<<"funC"<<endl;
    }
//    virtual void funC2(){
//
//    }
    virtual void funC2();
    virtual void funC3();

};

int main(){
         Base b;
        ChildA* ca =(ChildA*)&b;
        ChildB* cb = (ChildB*)&b;
        ChildC* cc = (ChildC*)&b;
        cout<<ca<<" "<<cb<< " "<<cc<<endl;
        cout<< sizeof(ca)<<" "<< sizeof(cb) << " "<< sizeof(cc)<<endl;
        cout<< sizeof(ChildA)<<" "<< sizeof(ChildB)<<" "<< sizeof(ChildC)<<endl;
    cc->funC();

        ChildB cbb(4);

};