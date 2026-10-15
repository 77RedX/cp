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
        string s;
        cin>>s;
        vector<int> pref(n, 0);
        unordered_map<int,int> mpp;
        for(int i=0; i<n; i++){
            mpp[s[i]]++;
            pref[i]=mpp.size();
        }
        vector<int> suff(n, 0);
        unordered_map<int,int> mp;
        for(int i=n-1; i>=0; i--){
            mp[s[i]]++;
            suff[i]=mp.size();
        }
        int ans=0;
        for(int i=0; i<n-1; i++){
            ans=max(ans, pref[i]+suff[i+1]);
        }
        cout<<ans<<endl;
    }   
    return 0;
}