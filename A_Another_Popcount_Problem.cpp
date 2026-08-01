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
        int n,k;
        cin>>n>>k;
        int ans=0;
        for (int bit=0;bit<32;bit++) {
            int cost=1LL<<bit;
            if (cost>n) {
                break;
            }
            int take=min(k, n/cost);
            ans +=take;
            n -=take*cost;
        }  
        cout<<ans<<"\n";
    }   
    return 0;
}