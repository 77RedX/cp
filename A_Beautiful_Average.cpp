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
        int out=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            out=max(out,x);
        }
        cout<<out<<endl;
    }
    return 0;
}