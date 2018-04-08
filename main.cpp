#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//

int main(){
    int t;
    cin>>t;
    int hor[4];
    int vec[4];
    vector<int> len_vec;
    while (t--){
        cin>>hor[0]>>hor[1]>>hor[2]>>hor[3];
        cin>>vec[0]>>vec[1]>>vec[2]>>vec[3];
        len_vec.clear();
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                int temp_len = (hor[i]-hor[j])*(hor[i]-hor[j]) + (vec[i]-vec[j])*(vec[i]-vec[j]);
                len_vec.push_back(temp_len);
            }
        }
        sort(len_vec.begin(),len_vec.end());
        for(auto item:len_vec){
            cout<<item<<endl;
        }
        if(len_vec.at(0)==len_vec.at(1) && len_vec.at(1)==len_vec.at(2) && len_vec.at(2) == len_vec.at(3) && len_vec.at(4) == len_vec.at(5)){
            cout<<"true"<<endl;
        }else{
            cout<<"false"<<endl;
        }

    }
    return 0;
}
//
//long count;
//vector<long> coins;
//vector<int> coins_remains;
//void fun(long n){
//    if(n<0){
//        return;
//    }
//
//    if(n==0){
//        count++;
//    }else{
//        for(int i=0;i<coins.size();i++){
//            if(coins_remains.at(i)>0){
//                long temp = n-coins.at(i);
//                fun(n-coins.at(i));
//                coins_remains[i]--;
//            }
//
//        }
//    }
//}
//int main(){
//    long n;
//    cin>>n;
//    count = 0;
//    coins.clear();
//    for(long i=1;i<n;i<<=1){
//        coins.push_back(i);
//        coins_remains.push_back(2);
//
//    }
////    for(auto item: coins){
////        cout<<item<<endl;
////    }
//    fun(n);
//    cout<<count<<endl;
//    return 0;
//
//}