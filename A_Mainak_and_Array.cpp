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
        int mini=1e4;
        int maxi=0;
        fn{
            cin>>a[i];
            mini=min(mini,a[i]);
            maxi=max(maxi,a[i]);
        }
        int ans=a[n-1]-a[0];
        ans=max({maxi-a[0],a[n-1]-mini});
        for(int i=1;i<n;i++){
            ans=max(ans,a[i-1]-a[i]);
        }
        cout<<ans<<endl;
    }   
    return 0;
}