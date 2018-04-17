
// Created by YuXiao on 4/17/18.
//
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template <typename  T>
const T* my_find(T* arr,T n, T x){
    const T* p =arr;
    int i;
    for(i=0;i<n;i++){
        if(*p == x){
            return p;
        }
        p++;
    }
    return 0;
}

template <typename T>
struct Tcontainer{
    virtual void push(const T&) =0;
    virtual void pop() = 0;
    virtual const T& begin() = 0;
    virtual const T& end() = 0;
    virtual size_t size() = 0;
};

template <typename T>
struct Tvector: public Tcontainer<T>{
    static const size_t _step = 100;
    Tvector(){
        size_ = 0;
        cap_ = _step;
        buf_ = 0;
        re_capacity(cap_);
    }

    ~Tvector(){
        free(buf_);
    }
    void re_capacity(size_t s){
        if(!buf_){
            buf_ = (T*)malloc(sizeof(T)*s);
        }else{
            buf_= (T*)realloc(buf_, sizeof(T)*s);
        }
    }

    void push(const T &v) override {
        if(size_ > cap_){
            re_capacity(cap_ += _step);
        }
        buf_[size_++] = v;
    }


    void pop() override {
        if(size_){
            size_--;
        }
    }

    const T &begin() override {
        return buf_[0];
    }

    const T &end() override {
        if(size_){
            return buf_[size_-1];
        }
    }

    size_t size() override {
        return  size_;
    }

    const T& operator[](size_t i){
        if(i>=0 && i<size_){
            return buf_[i];
        }
    }

private:
    size_t  size_;
    size_t cap_;
    T* buf_;

};
int main(){
//        vector<int> arr;
//    arr.push_back(1);
//    arr.push_back(6);
//    arr.push_back(6);
//    arr.push_back(3);
//
//    vector<int>::iterator itor;
//    vector<int>::iterator itor2;
//
//    itor = arr.begin();
//    remove(arr.begin(),arr.end(),6);
//    cout<<arr.size()<<endl;

    Tvector<int> v;
    for(int i=0;i<1000;i++){
        v.push(i);
    }
    for(int i=0;i<1000;i++){
        cout<<v[i]<<endl;
    }

}
