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
        int n,m,k;
        cin>>n>>m>>k;
        //possible logic: suppose home base is in left side, to move soldiers into n-1 bases, we need n-1 soldiers in home base 1st
        //then we can start moving them. it can be proven that this gives the minimum time.
        //so to make n-1 soldiers, we will need n-2 days (1 soldier is already at home initially). then we need to shift them.
        //so we will need n-1 days to move them across n bases. so total 2n-3 days for this process. therefore 2n-3 soldiers were
        //brought, out of which we sent n-1 to other bases, so n-2 soldiers still remain at home base. if the home base was not at
        //left side, we can utilise these n-2 soldiers to send to the rest of bases. if more are required, we wait for them to arrive
        //then spend the rest of days to allocate them. however if there are less days, then we need to allocate only as much as
        // possible.
    }   
    return 0;
}