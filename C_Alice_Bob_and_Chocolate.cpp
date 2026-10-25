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
    int n;
    cin>>n;
    vi a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int alice=0, bob=0;
    vi prefa(n), prefb(n);
    prefa[0]=a[0];
    prefb[n-1]=a[n-1];
    for(int i=1; i<n; i++){
        prefa[i]=prefa[i-1]+a[i];
        prefb[n-1-i]=prefb[n-i]+a[n-1-i];
    }
    for(int i=0; i<n; i++){
        if(prefb[i]<prefa[i]) bob++;
        else alice++;
    }
    cout<<endl;
    cout<<alice<<" "<<bob<<endl;
    return 0;
}