#include <iostream>
#include <cstdio>
#include <string>
using namespace std;


#define OUTPUT(f)	cout << #f << "\t: " << typeid(f).name() << endl;
class BaseA {};
class DeriveA: public BaseA {};

class BaseB
{
    virtual void f(){}
};
class DeriveB: public BaseB {};
// typeid是C++的关键字之一，等同于sizeof这类的操作符。typeid操作符的返回结果是名为type_info的标准库类型的对象的引用。
// 果表达式的类型是类类型且至少包含有一个虚函数，则typeid操作符返回表达式的动态类型，需要在运行时计算；否则，typeid操作符返回表达式的静态类型，在编译时就可以计算
int main()
{
    cout << "-------直接处理类名-------" <<endl;

    OUTPUT(BaseA);
    OUTPUT(DeriveA);
    OUTPUT(BaseB);
    OUTPUT(DeriveB);

    cout << endl << "-------基类不含虚函数-------" <<endl;

    BaseA baseA;
    DeriveA deriveA;
    OUTPUT(baseA);
    OUTPUT(deriveA);

    BaseA* pa;
    pa = &baseA;
    OUTPUT(*pa);
    OUTPUT(pa);
    pa = &deriveA;
    OUTPUT(*pa);
    OUTPUT(pa);

    cout << endl << "-------基类含有虚函数-------" <<endl;

    BaseB baseB;
    DeriveB deriveB;
    OUTPUT(baseB);
    OUTPUT(deriveB);

    BaseB* pb;
    pb = &baseB;
    OUTPUT(*pb);
    OUTPUT(pb);
    pb = &deriveB;
    OUTPUT(*pb);
    OUTPUT(pb);
}