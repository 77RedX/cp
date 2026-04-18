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
        int a,b,n;
        cin>>a>>b>>n;
        vi v(n);
        fn cin>>v[i];
        int ans=b;
        fn{
            if(v[i]>=a){
                ans+=a-1;
            }
            else{
                ans+=v[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}