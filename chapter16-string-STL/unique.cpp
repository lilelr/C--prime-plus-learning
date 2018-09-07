#include <iostream>
#include <string>
#include <memory>
using namespace std;

unique_ptr<string> demo(const char * s)
{
    unique_ptr<string> temp(new string(s));
    return temp;
}
unique_ptr<string> demo2(const char* str){
    unique_ptr<string> temp(new string(str));
    return temp;
}

int main()
{
    unique_ptr<string> ps1, ps2;
    ps1 = demo("Uniquely special");
    ps2 = move(ps1);                 // enable assignment
    ps1 = demo(" and more");
    cout << *ps2 << *ps1 << endl;

    unique_ptr<string> ps3,ps4;
    ps3 = demo2("abc agg ");
    ps4 = move(ps3);
    cout<<*ps4<<endl;

    // cin.get();
    return 0;
}