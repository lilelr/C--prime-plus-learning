//
// Created by YuXiao on 5/11/18.
//

class Scientist{
    char name[400];
public:
    virtual void show_name();
    virtual void show_all();
};

class Physicist: public Scientist{
    char* field;
public:
    Physicist(char* a){
        field = a;
    }
    void show_all();
    virtual void show_field();
};

int main(){
    Physicist acm("adm");
    Scientist* psc = &acm;
    psc->show_all();
}