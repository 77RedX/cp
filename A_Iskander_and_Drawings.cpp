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
        int len=0, ans=0;
        for(int i=0; i<n; i++){
            if(s[i]=='#'){
                len++;
                ans=max(ans, len);
            }
            else len=0;
        }
        cout<<(ans+1)/2<<endl;
    }  
    return 0;
}