/*#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int solve(vi &a, vi &b, vector<vector<int>> &dp, int i, int w){
    //cout<<w<<endl;
    if(i==0){
        if(w-a[i]>=0) return dp[i][w]=b[i];
        return dp[i][w]=0;
    }
    if(dp[i][w]!=-1) return dp[i][w];
    //take
    int t=INT_MIN;
    if((w-a[i])>=0){
        t=b[i]+solve(a,b,dp,i-1,w-a[i]);
    }
    //dont take
    int d=solve(a,b,dp,i-1,w);
    //return
    //cout<<t<<" "<<d<<endl;
    return dp[i][w]=max({t,d});
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,w;
    cin>>n>>w;
    vi a(n),b(n);
    fn{
        cin>>a[i]>>b[i];
    }
    vector<vector<int>> dp(n+1,vector<int> (w+1,-1));
    cout<<solve(a,b,dp,n-1,w)<<endl;
    return 0;
}
*/
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
    vector<int> prev(w+1,0);
    vi a(n),b(n); //a is weight, b is price
    fn{
        cin>>a[i]>>b[i];
    }
    for(int i=a[0];i<=w;i++){
        prev[i]=b[0]; // can steal if weight limit is >=a[0]
    }
    for(int i=1;i<n;i++){
        for(int j=w;j>=0;j--){
            int dont=prev[j]+0;
            int take=INT_MIN;
            if(j>=a[i]) take=prev[j-a[i]]+b[i];
            prev[j]=max(dont,take);
        }
    }
    cout<<prev[w]<<endl;
    return 0;
}