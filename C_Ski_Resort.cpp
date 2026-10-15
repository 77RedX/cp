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
        int n, k, q;
        cin>>n>>k>>q;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int l=0, r=0;
        int ans=0;
        for(r=0; r<n; r++){
            if(a[r]>q){
                int total = r-l;
                if(total>=k){
                    total=total-k+1;
                    ans+=((total)*(total+1))/2;
                }
                l=r+1;
            }
        }
        int total = r-l;
        if(total>=k){
            total=total-k+1;
            ans+=((total)*(total+1))/2;
        }
        l=r+1;
        cout<<ans<<endl;
    }   
    return 0;
}