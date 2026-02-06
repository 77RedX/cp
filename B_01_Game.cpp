#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "DA" << endl
#define cn cout << "NET" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;   
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int one=0;
        int zero=0;
        for(auto i:s){
            if(i=='1')one++;
            if(i=='0')zero++;
        }
        if(min(one,zero)%2){ //jaise hi min khatm, game khatm, even moves hua to alice lose wrna alice win
            cy;
        }
        else{
            cn;
        }
    }
    return 0;
}