#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
void solve(string s, int n){
    //same parity for both 1s and 0s
    int o=0;
    vi ol;
    vi zl;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            o++;
            ol.push_back(i+1);
        }
        else{
            zl.push_back(i+1);
        }
    }
    if(o%2==0){
        cout<<ol.size()<<endl;
        for(auto i:ol){
            cout<<i<<" ";
        }
        if(ol.size()>0) cout<<endl;
    }
    else if((n-o)%2==1){
        cout<<n-ol.size()<<endl;
        for(auto i:zl){
            cout<<i<<" ";
        }
        if(zl.size()>0) cout<<endl;
    }
    else{
        cout<<"-1\n";
    }

}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        solve(s,n);
    }
    return 0;
}