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
    int n,w;
    cin>>n>>w;
    int maxi=1e5;
    vector<int> dp(maxi+1,1e18);
    vi a(n),b(n); //a is weight, b is price
    dp[0]=0;
    fn{
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=maxi;j>=b[i];j--){//minimum weight is the weight of ith item here
            if(dp[j-b[i]]!=1e18){
                dp[j]=min(dp[j-b[i]]+a[i],dp[j]);
            }
        }
    }// for all values check min weight required
    int ans=0;
    for(int i=0;i<=maxi;i++){
        if(dp[i]<=w){
            ans=max(ans,i);
        }
    }
    cout<<ans<<endl;
    return 0;
}