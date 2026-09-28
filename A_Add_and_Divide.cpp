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
        int a, b;
        cin>>a>>b;
        int res=INT_MAX;
        for(int k=0; k<30; k++){
            int d=a;
            int ans=0;
            int c=b+k;
            if(c==1){
                c=2;
                ans++;
            }
            ans+=k;
            while(d>0){
            if(d>c) d=d/c;
            else if(d<c) d=d/c;
            else c++;
            ans++;
            }
            res=min(res, ans);
        }
        cout<<res<<endl;
    }   
    return 0;
}