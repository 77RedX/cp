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
        int n,c;
        cin>>n>>c;
        int mini=0;
        vi a(n);
        fn {
            cin>>a[i];
            mini+=a[i];
            mini-=c;
        }
        sort(a.begin(), a.end());
        int maxi=mini;
        for(int i=0; i<n/2; i++){
            if(c>a[i]){ //pair it
                maxi+=c-a[i];
            }
        }
        cout<<maxi<<endl;
    }   
    return 0;
}