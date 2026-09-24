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
        int x, y, k;
        cin>>x>>y>>k;
        //initially only 1 stick
        int ans=0;
        int reqcoal=k;
        int reqsticks=k;
        int sticksforcoal = k*y;
        reqsticks+=sticksforcoal;
        int curr=1;
        int net=x-1;
        int l=(reqsticks-curr)/(net);
        ans+=(reqsticks-curr)%(net)?l+1:l;
        //cout<<ans<<endl;
        ans+=k;
        cout<<ans<<endl;
    }   
    return 0;
}