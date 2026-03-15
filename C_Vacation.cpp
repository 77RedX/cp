#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int solve(vector<vector<int>>& a, vector<vector<int>> &dp, int day, int last){
    if(dp[day][last]!=-1) return dp[day][last];
    if(day==0){
        int maxi=0;
        for(int i=0;i<3;i++){
            if(i!=last){
                maxi=max(maxi,a[0][i]);
            }
        }
        return dp[day][last]=maxi;
    }
    int maxi=0;
    for(int i=0;i<3;i++){
        if(i!=last){
            maxi=max(maxi,a[day][i]+solve(a,dp,day-1,i));
        }
    }
    return dp[day][last]=maxi;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(3));
    vector<vector<int>> dp(n,vector<int>(4,-1));
    fn{
        for(int j=0;j<3;j++) cin>>a[i][j];
    }
    cout<<solve(a,dp,n-1,3)<<endl;
    return 0;
}