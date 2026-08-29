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
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        int maxi=n+m-1;
        vi a(x), b(y);
        for(int i=0; i<x; i++) cin>>a[i];
        for(int j=0; j<y; j++) cin>>b[j];
        vector<pair<int,int>> e;
        int i=x-1, j=y-1;
        while(i>=0 || j>=0){
            if(i>=0 && j>=0 && a[i]==b[j]){
                e.push_back({a[i], 3}); //present in both
                i--;
                j--;
            }
            else if(j<0 || (i>=0 && j>=0 && a[i]>b[j])){
                e.push_back({a[i], 1});
                i--;
            }
            else if(i<0 || (i>=0 && j>=0 && a[i]<b[j])){
                e.push_back({b[j], 2});
                j--;
            }
        }
        int ans=0;
        int ca=0, cb=0, cab=0;
        for(auto i: e){
            if(ca+cb+cab>=maxi){
                break;
            }
            int val=i.first;
            int from=i.second;
            if(from==1){
                if(ca<n){
                    ca++;
                    ans+=val;
                }
            }
            else if(from==2){
                if(cb<m){
                    cb++;
                    ans+=val;
                }
            }
            else{
                cab++;
                ans+=val;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}