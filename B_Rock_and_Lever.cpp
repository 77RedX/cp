#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int msbpos(int n){
    int pos=-1;
    while(n){
        pos++;
        n>>=1;
    }
    return pos;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<"0\n";
            continue;
        }
        //find MSBs
        unordered_map<int, int> mpp;
        for(int i=0; i<n; i++){
            mpp[msbpos(a[i])]++;
        }
        int ans=0;
        for(auto i: mpp){
            if(i.second>1){
                ans+=((i.second-1)*(i.second))/2;
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}