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
        int k;
        cin>>k;
        int maxi=0;
        int count=0;
        for(int i=0; i<k; i++){
            int c;
            cin>>c;
            maxi=max(maxi, c);
            if(c>=2) count++;
        }
        if(count>=2 || maxi>=3){
            cy;
        }
        else{
            cn;
        }
    }
    return 0;
}