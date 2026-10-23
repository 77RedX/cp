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
        fn cin>>a[i];
        vector<int> pref(n);
        pref[0]=a[0];
        fn{
            if(i==0) continue;
            pref[i]=pref[i-1]+a[i];
        }
        // fn{
        //     cout<<pref[i]<<" ";
        // }
        fn{
            pref[i]=pref[i]%k;
        }
        //cout<<endl;
        unordered_map<int, int> mpp;
        int ans=0;
        fn{
            if(pref[i]==0){
                if(i>k-1) {
                    ans++;

                }
            }
            if(mpp[pref[i]]){ //exists
                ans+=mpp[pref[i]];
            }
            if(i>=k) mpp[pref[i-k]]++;
        }
        // for(auto i: mpp){
        //     cout<<i.first<<":";
        //     for(auto x:i.second){
        //         cout<<x<<" ";
        //     }
        //     cout<<endl;
        // }
        cout<<ans<<endl;
        //cout<<endl;
    }   
    return 0;
}