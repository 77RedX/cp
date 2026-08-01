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
        string s;
        cin>>s;
        int ans=0;
        for(int i=0; i<k; i++){
            if(s[i]=='L'){
                ans++;
            }
            if(s[n-1-i]=='R'){
                ans++;
            }
            if(n-1-i<=i){
                ans=-1;
                break;
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}