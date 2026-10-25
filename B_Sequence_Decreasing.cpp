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
        int mini=INT_MAX;
        for(int i=0; i<n; i++){
            cin>>a[i];
            mini=min(mini, a[i]);
        }
        if(mini>=n){
            cout<<"0\n";
        }
        else{
            cout<<n<<endl;
        }
    }
    return 0;
}