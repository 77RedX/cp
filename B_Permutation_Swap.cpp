#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int mygcd(int x, int y){
    while(x){
        int a=x;
        x=y%x;
        y=a;
    }
    return y;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        } 
        int ans=abs(a[1]-1LL);
        for(int i=2;i<=n;i++){
            ans=__gcd(ans,abs(a[i]-(i)));
        }
        cout<<ans<<endl;
    }
    return 0;
}