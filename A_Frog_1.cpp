#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int solve(vi &a, int i, vi& dp){
    int n=a.size();
    if(i==0){
        return 0; 
    }
    if(dp[i]!=-1) return dp[i];
    //single
    int l=abs(a[i]-a[i-1])+solve(a, i-1, dp);
    //double jump
    int r=INT_MAX;
    if(i>1) r=abs(a[i]-a[i-2])+solve(a, i-2, dp);
    return dp[i]=min({l,r});
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vi a(n);
    vi dp(n+1,-1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    solve(a,n-1,dp);
    cout<<dp[n-1]<<endl;
    return 0;
}