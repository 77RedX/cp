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
        int n,m;
        cin>>n>>m;
        vi a(n), b(m);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<m; i++) cin>>b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a[n-1]<b[m-1] || a[0]>b[0]) {cn; continue;} //out of bounds
        if(a.size()<(b.size()*2)) {cn; continue;}
        int flag=0;
        for (int i=0; i<m; i++){
            if(a[i]>=b[i]){
                flag=1;
                break;
            }
            if(a[n -m +i]<=b[i]){
                flag=1;
                break;
            }
        }
        if(flag) cn;
        else cy;
    }
    return 0;
}