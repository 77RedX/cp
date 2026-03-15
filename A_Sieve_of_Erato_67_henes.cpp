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
    //SIX SEVEN
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        int one=0;
        int ss=0;
        fn {
            cin>>a[i];
            if(a[i]==1) one++;
            if(a[i]==67) ss++;
        }
        if((one && ss) || ss) cy;
        else cn;
    }   
    return 0;
}