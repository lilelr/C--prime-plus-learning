//
// Created by YuXiao on 3/14/18.
//
#include <iostream>
#include "tabtenn1.h"

int main(){
    using std::cout;
    RatedTennisPlayer rplayer1("ee","w", true,22);
   
    TableTennisPlayer& rt = rplayer1;
    TableTennisPlayer* pt = &rplayer1;
    rt.Name();
    pt->ResetTable(3);

    return 0;
}
