#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int solve(vector<vector<char>>& a, int i, int j, vector<vector<int>>& dp){
    if(i<0 || j<0) return 0;
    if(a[i][j]=='#') return 0;
    if(i==0 && j==0){
        return 1;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    int up=solve(a,i-1,j,dp)%MXI;
    int left=solve(a,i,j-1,dp)%MXI;
    return dp[i][j]=(up+left)%MXI;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int h,w;
    cin>>h>>w;
    vector<vector<char>> grid(h,vector<char>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>grid[i][j];
        }
    }
    vector<vector<int>> dp(h,vector<int>(w,-1));
    cout<<solve(grid, h-1, w-1, dp)<<endl;
    return 0;
}