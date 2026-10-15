#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int solve(vector<vector<int>> &a, int i, int j, vector<vector<int>> &dp, int p){
    if(i>=a.size() || j>=a.size()){
        if(i==a.size()-1 || j==a.size()-1){ // was at corner, tried to go beyond
            return 0;
        }
        return 1e9;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    if(a[i][j]==0) return dp[i][j]=1e9; // 1 trailing zero, handle seperately
    int x=a[i][j];
    int val=0;
    while(x%p==0){
        x/=p;
        val++;
    }
    //right
    int right = val+solve(a, i, j+1, dp, p);
    //down
    int down = val+solve(a, i+1, j, dp, p);
    return dp[i][j]=min(right, down);
}
string foo(vector<vector<int>> &a, vector<vector<int>> &dp){
    string s="";
    int i=0, j=0;
    int n=dp.size();
    while(i!=n-1 || j!=n-1){
        if (i==n-1) {
            s+='R';
            j++;
            continue;
        }
        else if (j==n-1) {
            s+='D';
            i++;
            continue;
        }
        if(dp[i][j+1]>dp[i+1][j]){//if same then no issue, both have a path
            s+='D';
            i++;
        }
        else{
            s+='R';
            j++;
        }
    }
    return s;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>> a(n, vector<int> (n));
    vector<pair<int,int>> zeros;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            if(a[i][j]==0) zeros.push_back({i, j});
        }
    }
    vector<vector<int>> dp1(n, vector<int> (n, -1));
    vector<vector<int>> dp2(n, vector<int> (n, -1));
    solve(a, 0, 0, dp1, 5);
    solve(a, 0, 0, dp2, 2);
    auto &dp = dp1[0][0]>dp2[0][0]?dp2:dp1;
    if(dp[0][0]>1 && zeros.size()){
        cout<<"1\n";
        string path="";
        int i=0, j=0;
        for(i=0; i<zeros[0].first; i++){
            path+='D';
        }
        for(j=0; j<n-1; j++){
            path+='R';
        }
        while(i<n-1){
            path+='D';
            i++;
        }
        cout<<path<<endl;
        return 0;
    }
    cout<<dp[0][0]<<endl;
    cout<<foo(a, dp)<<endl;
    return 0;
}