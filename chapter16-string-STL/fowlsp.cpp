// fowlsp.cpp  -- shared_ptr a good choice
#include <iostream>
#include <string>
#include <memory>

int main()
{
    using namespace std;
    shared_ptr<string> films[5] =
    {
        shared_ptr<string> (new string("Fowl Balls")),
        shared_ptr<string> (new string("Duck Walks")),
        shared_ptr<string> (new string("Chicken Runs")),
        shared_ptr<string> (new string("Turkey Errors")),
        shared_ptr<string> (new string("Goose Eggs"))
    };
    shared_ptr<string> pwin;
    pwin = films[2];   // films[2], pwin both point to "Chicken Runs"

    cout << "The nominees for best avian baseball film are\n";
    for (int i = 0; i < 5; i++)
        cout << *films[i] << endl;
    cout << "The winner is " << *pwin << "!\n";
    // cin.get();

    shared_ptr<string> films_second[1] = {shared_ptr<string> (new string("fee"))};
    shared_ptr<string> ps = films_second[0];
    cout<<*ps<<endl;
    cout<< *films_second[0]<<endl;
    return 0;
}
