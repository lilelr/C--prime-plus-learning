//
// Created by YuXiao on 3/25/18.
//

typedef int* IntArrayPtr;
int trans=k;
int len = prices.size();
IntArrayPtr* dp = new IntArrayPtr[trans];
for(int i=0;i<trans;i++){
dp[i] = new int[len];
}

vector<vector<int>> dp(n,vector<int>(n));