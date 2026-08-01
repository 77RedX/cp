#include <bits/stdc++.h>
#define int long long
#define MXI 998244353
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int power(int a, int x){
    int res=1;
    a%=MXI;
    while(x>0){
        if(x%2) res=(res*a)%MXI;
        a=(a*a)%MXI;
        x/=2;
    }
    return res;
}
void solve(){
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    int free=n*(c-1)+m*(r-1)-(r-1)*(c-1);
    cout<<power(2,free)<<endl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }   
    return 0;
}