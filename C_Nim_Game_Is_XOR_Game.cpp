#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int nzero=0;
    int xors = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if (a[i]>0) {
            nzero++;
        }
        xors^= a[i];
    }
    if(nzero<=1){
        cout<<0<<"\n";
        return;
    }
    if(xors==0) {
        cout<<1<<"\n";
        return;
    }
    int moves=0;
    for(int i=0; i<n; i++){
        if((xors^a[i])<a[i]) {
            moves++;
        }
    }
    cout<<moves<<"\n";
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