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
        int n,m,h;
        cin>>n>>m>>h;
        vi a(n);
        fn{
            cin>>a[i];
        }
        vi copy=a;
        set<int> ci;
        for(int i=0;i<m;i++){
            int b,c;
            cin>>b>>c;
            if(a[b-1]+c>h){
                for(auto i:ci){
                    a[i]=copy[i];
                }
                ci.clear();
            }
            else{
                a[b-1]+=c;
                ci.insert(b-1);
            }
        }
        fn{
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}