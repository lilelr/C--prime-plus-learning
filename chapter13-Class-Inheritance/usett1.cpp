// usett1.cpp -- using base class and derived class
#include <iostream>
#include "tabtenn1.h"


void show(const TableTennisPlayer& rt){
    using std::cout;
    cout<<"Name: ";
    rt.Name();
    cout<<"\nTable:";
    if(rt.HasTable()){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }
}
int main ( void )
{
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
    show(player1);
    show(rplayer1);
    cout<<endl;
    rplayer1.Name();          // derived object uses base method
    if (rplayer1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";
    player1.Name();           // base object uses base method
    if (player1.HasTable())
        cout << ": has a table";
    else
        cout << ": hasn't a table.\n";
    cout << "Name: ";
    rplayer1.Name();
    cout << "; Rating: " << rplayer1.Rating() << endl;
// initialize RatedPlayer using TableTennisPlayer object
//    RatedPlayer rlayer3(111,player1);

    RatedPlayer rplayer2(1212, player1);
    cout << "Name: ";
    rplayer2.Name();
    cout << "; Rating: " << rplayer2.Rating() << endl;
    // std::cin.get();
    return 0;
}
