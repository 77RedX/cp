#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "Bob" << endl
#define cn cout << "Alice" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //lets go gambling
    int t;
    cin>>t;
    while(t--){
        int p,q;
        cin>>p>>q;
        if(3*p>=2*q && p<q){// dont use fractions in cp ever
            cout<<"Bob\n";
        }
        else cout<<"Alice\n";
    }
    return 0;
}