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
        int n, k;
        cin>>n>>k;
        vi a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int ans=0;
        int mini=a[0], maxi=a[0];
        for(int i=1; i<n; i++){
            mini=min(a[i], mini);
            maxi=max(a[i], maxi);
            if(maxi-mini>2*k){
                maxi=a[i];
                mini=a[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}