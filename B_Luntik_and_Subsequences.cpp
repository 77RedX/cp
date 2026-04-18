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
        int one=0;
        int zero=0;
        fn{
            cin>>a[i];
            if(a[i]==1){
                one++;
            }
            else if(a[i]==0){
                zero++;
            }
        }
        int ans=1LL<<(zero);
        ans*=one;
        cout<<ans<<endl;
    }
    return 0;
}