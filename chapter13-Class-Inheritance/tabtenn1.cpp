//
// Created by YuXiao on 3/15/18.
//

#include <iostream>
#include "tabtenn1.h"
TableTennisPlayer::TableTennisPlayer (const string & fn,
                                      const string & ln, bool ht) : first_name_(fn),
                                                                    last_name_(ln), has_table_(ht) {}

void TableTennisPlayer::Name() const
{
    std::cout << last_name_ << ", " << first_name_;
}

RatedTennisPlayer::RatedTennisPlayer(const string &first_name, const string &last_name, bool ht, unsigned int rate) :TableTennisPlayer(first_name,last_name,ht){
    this->rate_ = rate;
}

void RatedTennisPlayer::ResetRating(unsigned int rate) {
    this->rate_ = rate;
}
