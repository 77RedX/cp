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
    int x,y,z;
    cin>>x>>y>>z;
    //leftover
    int sasha=x%z;
    int masha=y%z;
    int transfer=0;
    if((sasha+masha)/z)transfer=min(z-sasha,z-masha);

    cout<<(x+y)/z<<" "<<transfer<<endl;
    return 0;
}