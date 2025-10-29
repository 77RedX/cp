#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<char,int> a,b;
        string x,y;
        cin>>x>>y;
        for(auto i:x){
            a[i]++;
        }
        for(auto i:y){
            b[i]++;
        }
        if(a==b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}