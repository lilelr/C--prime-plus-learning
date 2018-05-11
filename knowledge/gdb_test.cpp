//
// Created by YuXiao on 4/19/18.
//

#include <iostream>
#include <vector>
using namespace std;

const vector<int> modify(const vector<int>& my_cvs){
    vector<int> temp;
    temp = my_cvs;
    temp.push_back(45);
    temp.erase(temp.begin()+1);
    const vector<int> new_c_v = temp;
    return new_c_v;
}
int main(){
    cout<<"hello world"<<endl;

    vector<int> my_c_vs = {1, 3,5,6};

    const vector<int> res = modify(my_c_vs);
    for(int item:res){
        cout<<item<<endl;
    }
   return 0;
}