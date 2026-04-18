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
        int a,b;
        cin>>a>>b;
        int ans=max(a,b)-min(a,b);
        if(ans==0){
            cout<<"0 0\n";
        }
        else{
            cout<<ans<<" ";
            int steps=0;
            steps=min(ans-(a%ans), a%ans);
            cout<<steps<<endl;
        }
    }   
    return 0;
}