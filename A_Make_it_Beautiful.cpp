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
        int maxi=0;
        int mini=1e4;
        fn{
            cin>>a[i];
            mini=min(mini,a[i]);
            maxi=max(maxi,a[i]);
        }
        if(mini==maxi) cn;
        else{
            cy;
            int flag=1;
            cout<<maxi<<" ";
            fn{
                if(a[i]==maxi && flag){
                    flag=0;
                    continue;
                }
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}