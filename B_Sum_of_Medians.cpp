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
        double n,k;
        cin>>n>>k;
        int pos=n/2;
        vi a((n*k)+1);
        int sum=0;
        for(int i=1;i<=n*k;i++){
            cin>>a[i];
        }
        int r=n*k;
        for(int i=0;i<k;i++){
            //cout<<a[r-pos]<<" ";
            sum+=a[r-pos];
            r=r-pos-1;
        }
        //cout<<endl;
        cout<<sum<<endl;
    }
    return 0;
}