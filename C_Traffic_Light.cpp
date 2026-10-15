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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        s+=s;
        int ans=0;
        for(int i=0; i<n; i++){
            if(s[i]==c){
                int j=i;
                while(j<(2*n) && s[j]!='g'){
                    j++;
                }
                ans=max(ans, j-i);
                i=j;
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}