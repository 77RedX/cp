#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=1;i<=n;i++)
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //prefix sum
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vi a(n+1);
        vi pref(n+1);
        fn cin>>a[i];
        pref[1]=a[1];
        for(int i=2;i<=n;i++){
            pref[i]=pref[i-1]+a[i];
        }
        for(int i=0;i<q;i++){
            int l,r,k;
            cin>>l>>r>>k;
            int sum=l==1?pref[r]:pref[r]-pref[l-1];
            int x=pref[n]-sum;
            x+=k*(r-l+1);
            if(x%2) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}