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
    vector<int> a(n);
    fn cin>>a[i];
    vi pf(n),sf(n);
    for(int i=0;i<n;i++){
        if(i==0)pf[i]=a[i];
        else pf[i]=pf[i-1]+abs(a[i]);
    }
    for(int i=n-1;i>=0;i--){
        if(i==n-1) sf[i]=a[i];
        else sf[i]=sf[i+1]+a[i];
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        int left=0;
        int right=0;
        if(i>0) left=pf[i-1];
        if(i<n-1)right=sf[i+1];
        ans=max(ans,left-right);
    }
    cout<<ans<<endl;
    }
    return 0;
}