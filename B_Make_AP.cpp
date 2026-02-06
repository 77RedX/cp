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
        vector<int> a(3);
        for(int i=0;i<3;i++) cin>>a[i];
        if(((2*a[1]-a[0])%a[2]==0) && ((2*a[1]-a[0])/a[2]>0)){
            cy;
            //cout<<1<<endl;
        }
        else if(((2*a[1]-a[2])%a[0]==0) && ((2*a[1]-a[2])/a[0]>0)){
            cy;
            //cout<<2<<endl;
        }
        else if((((a[0]+a[2])/2)%a[1]==0) && abs(a[0]-a[2])%2==0 && (((a[0]+a[2])/2)/a[1]>0)){
            cy;
            //cout<<3<<endl;
        }
        else cn;
    }   
    return 0;
}