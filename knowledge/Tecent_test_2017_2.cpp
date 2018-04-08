#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int x=4;
void incre()
{
    static int x=1;
//    cout<<x<<endl;
    x*=x+1;
//    cout<<"afert"<<x<<endl;
    printf("%d\n",x);
}

string code(int n){
    string ans = "";
    int mid,low, high;
    low = -90;
    high = 90;
    while (low < high){
        mid = (low+high)/2;
        if(mid == n){
            ans+='0';
            return ans;
        }
        if(mid > n){
            high = mid-1;
            ans+='0';
        }else {
            low  = mid;
            ans+='1';
        }
    }
}
//链接：https://www.nowcoder.com/questionTerminal/7620c27c5b2346bd9dca9d8a5f2f20b2
//        来源：牛客网

int f(int a, int b, int c)
{
    return 0;
}
//int main(){
//    return f(printf("a"),printf("b"),printf("c"));
//}

// 19
int main(){
    const int N = 10;
    const int M = 2;
    int* a = new int[N];
    for (int i = 0; i < N; ++i)
        a[i] = (0 == i % 2) ? (i + 2) : (i + 0);
    int(*b)[N / M] = (int(*)[N / M])a;
    for(int i=0;i<10;i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
    printf("%d\n",b[1][2]);

    int term =0;
    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N/M; ++j){
            term = b[i][j];
            printf("%d", b[i][j]);

        }
    return 0;
}