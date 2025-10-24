#include<bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int even=0;
        vi a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) even++;
        }
        if((n-even)%2==0) cy;
        else cn;
    }   
    return 0;
}