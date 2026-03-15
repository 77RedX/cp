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
        vi a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        vi vis(n+1,0);
        int flag=0;
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j*=2){
                for(int k=j;k<=n;k*=2){
                    if(a[j]>a[k]) swap(a[j],a[k]);
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(a[i]!=i)flag++;
        }
        if(flag) cn;
        else cy;
    }
    return 0;
}