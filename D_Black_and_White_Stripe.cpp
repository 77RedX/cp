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
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int tmp=0;
        int ans=k;
        for(int i=0; i<k; i++){
            if(s[i]=='W'){
                tmp++;
            }
        }
        ans=min(ans, tmp);
        int l=0;
        for(int i=k; i<n; i++){
            if(s[l]=='W') tmp--;
            l++;
            //cout<<"entered this loop"<<endl;
            if(s[i]=='W') tmp++;
            ans=min(ans, tmp);
        }
        cout<<ans<<endl;
    }
    return 0;
}