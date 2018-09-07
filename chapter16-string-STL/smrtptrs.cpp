// smrtptrs.cpp -- using three kinds of smart pointers
#include <iostream>
#include <string>
#include <memory>

class Report
{
private:
    std::string str;
public:
    Report(const std::string s) : str(s) { std::cout << "Object created!\n"; }
    ~Report() { std::cout << "Object deleted!\n"; }
    void comment() const { std::cout << str << "\n"; }
};

int main()
{
    {
        std::auto_ptr<Report> ps1 (new Report("using auto_ptr"));
        ps1->comment();   // use -> to invoke a member function
    }
    {
        std::shared_ptr<Report> ps2 (new Report("using shared_ptr"));
        ps2->comment();
    }
    {
//        std::unique_ptr<Report> ps3 (new Report("using unique_ptr"));
//        ps3->comment();
    }
    // std::cin.get();  
    return 0;
}
