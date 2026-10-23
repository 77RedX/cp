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
        vi a(n);
        fn cin>>a[i];
        int ans;
        for(int i=1; i<=60; i++){
            set<int> st;
            int k=1LL<<i;
            for(int i=0; i<n; i++){
                st.insert(a[i]%k);
            }
            if(st.size()==2){
                //cout<<"test"<<endl;
                ans=k;
                break;
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}