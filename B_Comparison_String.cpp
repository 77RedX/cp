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
        string s;
        cin>>n>>s;
        int ans=1;
        int maxi=ans;
        fn{
            if(i==0) continue;
            if(s[i]==s[i-1])maxi++,ans=max(maxi,ans);
            else maxi=1; 
        }
        cout<<ans+1<<endl;
    }   
    return 0;
}