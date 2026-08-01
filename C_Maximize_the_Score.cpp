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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(2*n+1);
        for(int i=1; i<2*n+1; i++){
            cin>>a[i];
        }
        vector<int> dp(2*n+1, 0);
        vector<int> idx(n+1, 0);
        for(int i=1; i<2*n+1; i++){
            dp[i]=dp[i-1]+1; //if taken outside of larger interval
            if(idx[a[i]]){
                int r=idx[a[i]];
                int s=(i-r+1)*(i-r+1);
                int score=dp[r-1]+s;
                dp[i]=max(dp[i], score);
            }
            else{
                idx[a[i]]=i;
            }
        }
        cout<<dp[2*n]<<endl;
    }   
    return 0;
}