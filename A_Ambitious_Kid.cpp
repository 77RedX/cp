#include<bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vi a(n);
    int mi=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mi=min(mi,abs(a[i]));
    }
    cout<<mi<<endl;
    return 0;
}