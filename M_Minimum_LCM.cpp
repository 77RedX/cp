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
        int a=1;
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                a=max(a, n/i);
            }
        }
        cout<<a<<" "<<n-a;
        cout<<endl;
    }   
    return 0;
}