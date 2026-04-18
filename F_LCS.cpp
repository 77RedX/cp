#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
void solve(string s, int i, string smol, vector<string> &sub){ // to create all subsequences
    int n=s.size();
    if(i>=n){
        sub.push_back(smol);
        return;
    }
    //take
    solve(s,i+1,smol+s[i],sub);
    //don't take
    solve(s,i+1,smol,sub);
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    string t;
    cin>>s>>t;
    
    return 0;
}