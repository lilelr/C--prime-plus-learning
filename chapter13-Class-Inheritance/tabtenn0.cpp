//
// Created by YuXiao on 3/14/18.
//

#include "tabtenn0.h"
#include <iostream>

 TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht) {
     this->last_name_ = ln;
     this->first_name_ = fn;
     this->has_table_ = ht;
 }

void TableTennisPlayer::Name() const {
    std::cout<< last_name_ <<"," <<first_name_;
}