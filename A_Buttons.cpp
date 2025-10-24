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
        int a,b,c;
        cin>>a>>b>>c;
        int comm=c%2==0?c/2:(c/2)+1;
        // cout<<comm;
        if((a+comm)>(b+(c-comm)))cout<<"First\n";
        else cout<<"Second\n";
    }
    return 0;
}