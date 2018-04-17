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

//   在揭开typeid神秘面纱之前，我们先来了解一下RTTI（Run-Time Type Identification，运行时类型识别），它使程序能够获取由基指针或引用所指向的对象的实际派生类型，即允许“用指向基类的指针或引用来操作对象”的程序能够获取到“这些指针或引用所指对象”的实际派生类型。在C++中，为了支持RTTI提供了两个操作符：dynamic_cast和typeid。
//dynamic_cast允许运行时刻进行类型转换，从而使程序能够在一个类层次结构中安全地转化类型，与之相对应的还有一个非安全的转换操作符static_cast，因为这不是本文的讨论重点，所以这里不再详述，感兴趣的可以自行查阅资料。下面就开始今天我们的话题：typeid。
//
//typeid是C++的关键字之一，等同于sizeof这类的操作符。typeid操作符的返回结果是名为type_info的标准库类型的对象的引用（在头文件typeinfo中定义，稍后我们看一下vs和gcc库里面的源码），它的表达式有下图两种形式。
//
//
//如果表达式的类型是类类型且至少包含有一个虚函数，则typeid操作符返回表达式的动态类型，需要在运行时计算；否则，typeid操作符返回表达式的静态类型，在编译时就可以计算。
//ISO C++标准并没有确切定义type_info，它的确切定义编译器相关的，但是标准却规定了其实现必需提供如下四种操作（在之后的章节中我会来分析type_info类文件的源码）：
//t1 == t2	 如果两个对象t1和t2类型相同，则返回true；否则返回false
//        t1 != t2	 如果两个对象t1和t2类型不同，则返回true；否则返回false
//        t.name()	 返回类型的C-style字符串，类型名字用系统相关的方法产生
//        t1.before(t2)	 返回指出t1是否出现在t2之前的bool值     type_info类提供了public虚 析构函数，以使用户能够用其作为基类。它的默认构造函数和拷贝构造函数及赋值操作符都定义为private，所以不能定义或复制type_info类型的对象。程序中创建type_info对象的唯一方法是使用typeid操作符（由此可见，如果把typeid看作函数的话，其应该是type_info的 友元）。type_info的name成员函数返回C-style的字符串，用来表示相应的类型名，但务必注意这个返回的类型名与程序中使用的相应类型名并不一定一致（往往如此，见后面的程序），这具体由编译器的实现所决定的，标准只要求实现为每个类型返回唯一的字符串。
//
//上面的都是一些理论的东西，看不真切，下面将通过代码和图例来展示。
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