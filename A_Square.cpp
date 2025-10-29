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
        set<int> a;
        for(int i=0;i<4;i++){
            int x;
            cin>>x;
            a.insert(x);
        }
        if(a.size()==1) cout<<"YES\n";
        else cout<<"NO\n";
    }   
    return 0;
}