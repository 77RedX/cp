#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int solve(int i, vi& a, vi &b, vi& dp, int w){
    int n=a.size();
    if(i>=n){
        return 0;
    }
    if(dp[i]!=-1) return dp[i];
    //take
    int l=INT_MIN;
    if(w-a[i]>=0) l= b[i]+solve(i+1, a, b, dp ,w-a[i]);
    //don't take
    int r=solve(i+1, a, b, dp, w);
    return dp[i]=max({l,r});
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,w;
    cin>>n>>w;
    vi dp(n+1, -1);
    int cost=0;
    vi a(n),b(n); //a is weight, b is price
    fn{
        cin>>a[i];
        cin>>b[i];
    }
    cout<<solve(0, a, b, dp, w)<<endl;
    return 0;
}