#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int fib(int n,vector<int>& dp){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(dp[n]!=-1) return dp[n];
    else{
        return dp[n]=(fib(n-1,dp)+fib(n-2,dp))%MXI;
    }
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<fib(n,dp)<<endl;
    return 0;
}