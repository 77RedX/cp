#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
#define MOD 998244353
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;
        int ans=0;
        for(int i=l; i<=r; i++){
            int j;
            for(j=0; j<=62; j++){
                if(((1LL<<j)-1)>=i){
                    //cout<<(1LL<<j)<<endl;
                    break;
                }
            }
            ans=(ans+j+((((1LL<<j)-1)-i)%MOD))%MOD;
        }
        cout<<ans<<endl;
    }   
    return 0;
}
//im cooked