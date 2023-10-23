#include<bits/stdc++.h>
using namespace std;

int fib(int n,vector<int> &dp)
{
    if(n <=1){
        return dp[n];
    }
    if(dp[n]!=0)
    {
        return dp[n];
    }
    
    return dp[n]=(fib(n-2,dp) + fib(n-1,dp));
}

int main(int argc, char const *argv[])
{
    vector<int> res;
    int n=5;
    vector<int> dp(n,0);
    dp[0]=0;
    dp[1]=1;
    fib(n,dp);
    for(int i=0;i<dp.size();i++)
    {
        cout<<dp[i]<<" ";
    }
    return 0;
}
