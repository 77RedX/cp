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
        fn cin>>a[i];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                maxi=max(maxi,a[i]^a[j]);
        }
        }
        cout<<maxi<<endl;
    }
    return 0;
}