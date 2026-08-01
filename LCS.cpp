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
    //Longest common subsequence
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int m=t.size();
    string x="";
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]){
                dp[i][j]=dp[i-1][j-1]+1; //found a match
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int idx=dp[n][m]-1;
    for(int i=0;i<=idx;i++){
        x+='$';
    }
    int i=n;
    int j=m;
    while(i>0 && j>0){
        if(s[i-1]==t[j-1]){
            x[idx]=s[i-1]; 
            idx-=1;
            i-=1;
            j-=1;
        }
        else if(dp[i-1][j]>dp[i][j-1]){
            i-=1;
        }
        else{
            j-=1;
        }
    }
    cout<<x<<endl;
    return 0;
}