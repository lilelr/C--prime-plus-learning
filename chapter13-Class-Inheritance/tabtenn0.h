//
// Created by YuXiao on 3/14/18.
//

#ifndef C_PRIMER_PLUS_6_CODES_TABTENN0_H
#define C_PRIMER_PLUS_6_CODES_TABTENN0_H

#include <string>

using std::string;
class TableTennisPlayer {
public:
    explicit TableTennisPlayer(const string& fn="none", const string& ln="none",bool ht= false);
    void Name() const;
    bool HasTable() const{
        return has_table_;
    }
    void ResetTable(bool v){
        has_table_ = v;
    }

private:
    string first_name_;
    string last_name_;
    bool has_table_;
};


#endif //C_PRIMER_PLUS_6_CODES_TABTENN0_H
