#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //tabulation
    int n,k;
    cin>>n>>k;
    vi a(n);
    vi dp(n,-1);
    for(int i=0;i<n;i++) cin>>a[i];
    dp[0]=0;
    for(int i=1;i<n;i++){
        int mini=INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j>=0) {
                int cost=dp[i-j]+abs(a[i]-a[i-j]);
                mini=min(mini,cost);
            }
        }
        dp[i]=mini;
    }
    cout<<dp[n-1]<<endl;
    return 0;
}