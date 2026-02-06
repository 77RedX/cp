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
        int n,k;
        cin>>n>>k;
        int ed=n*(n-1)/2;
        int min=n-1;
        int rem=n;
        while(k>0 && k-rem-1>0){
            k-=rem-1;
            rem-=1;
        }   
        cout<<max(rem,1);
    }
    return 0;
}