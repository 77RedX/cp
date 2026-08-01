#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        vi pref(n+1, 0);
        fn{
            cin>>a[i];
            pref[i+1]=pref[i]+a[i];
        }
        int flag=0;
        for(int i=1; i<=n; i++){
            int l=(i*(i+1))/2;
            if(pref[i]<l){
                flag=1;
                break;
            }
        }
        if(flag) cn;
        else cy;
    }   
    return 0;
}