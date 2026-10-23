#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int expo(int a, int x){
    if(x==0) return 1;
    if(x==1){
        return a;
    }
    int half=expo(a, x/2)%MXI;
    int res=(half*half)%MXI;
    return x%2?(a*res)%MXI:res;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int ans=expo(n, k);
        cout<<ans<<endl;
    }
    return 0;
}