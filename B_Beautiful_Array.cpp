#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "-1" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, k, b, s;
        cin>>n>>k>>b>>s;
        if(s/k>=b && (s/k)-b<=n-1){
            int x=s/k;
            vector<int> ans(n);
            int i=0;
            while(x!=b && i<n-1){
                int y=k-1;
                ans[i]=y;
                i++;
                s-=y;
                if(s%k)x--;
            }
            if((s/k)!=b){
                cout<<"-1\n";
                continue;
            }
            ans[i]=s;
            for(auto i: ans){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            cn;
        }
    }   
    return 0;
}