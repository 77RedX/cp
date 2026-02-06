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
        a[0]=1;
        int gg=1;
        for(int i=1;i<n;i++){
            a[i]=a[i-1]+(n-i)*gg;
            gg*=-1;
        }
        reverse(a.begin(),a.end());
        fn cout<<a[i]<<" ";
        cout<<endl;
    }   
    return 0;
}