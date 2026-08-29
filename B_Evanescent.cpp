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
        int len=1;
        int ans=1;
        for(int i=1; i<n; i++){
            if(s[i]!=s[i-1]){
                ans++;
                len=0;
            }
        }
        int red=0;
        for(int i=1; i<n-1; i++){
            if(s[i]!=s[i-1] && s[i]!=s[i+1]){
                if(s[i-1]==s[i+1]) red=2;
                red=max(red,1LL);
            }
        }
        cout<<ans-red<<endl;
    }
    return 0;
}