#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=1;i<=n;i++)
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //O(n)?
    int n;
    cin>>n;
    vi v(n+1);
    int flag=0;
    fn cin>>v[i];
    fn{
        int x=v[i];
        int y=v[x];
        if(v[y]==i) {
            cy;
            flag=1;
            break;
        }
        else continue;
    }
    if(!flag) cn;
    return 0;
}