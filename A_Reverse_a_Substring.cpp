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
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n-1; i++){
        if(s[i]>s[i+1]){
            cy;
            cout<<i+1<<" "<<i+2;     
            return 0;
        }
    }
    cn;
    return 0;
}