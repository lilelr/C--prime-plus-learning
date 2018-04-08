//
// Created by YuXiao on 3/14/18.
//
#include <iostream>
#include "tabtenn0.h"

int main(){
    using std::cout;

   TableTennisPlayer table_tennis_player("lele","li", true);
    table_tennis_player.Name();
    if(table_tennis_player.HasTable()){
        cout<<": has a table. \n";
    } else{
        cout<<": hasn't a table.\n";
    }

    return 0;
}
