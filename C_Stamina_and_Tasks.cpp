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
        vi c(n), p(n);
        fn{
            cin>>c[i]>>p[i];
        }
        vector<double> dp(n+1,0.0);
        for(int i=n-1;i>=0;i--){
            double skip=dp[i+1];
            double take=c[i]+dp[i+1]*(1.0-p[i]/100.00);
            dp[i]=max(take,skip);
        }
        cout<<fixed<<setprecision(10);
        cout<<dp[0]<<endl;
    }
    return 0;
}
//2D dp not possible since double indices for s is invalid