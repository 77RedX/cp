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
        int n, r, b;
        cin>>n>>r>>b;
        int x=ceil((r*1.0)/(b+1)); //maximum how many will occur together
        int extra=r-((b)*(x-1)+(x-1));
        // cout<<x<<endl;
        // cout<<extra<<endl;
        string ans="";
        while(extra>0){
            for(int i=0; i<x; i++){
                if(r>0) ans+='R';
                r--;
            }
            if(b) ans+='B';
            b--;
            extra--;
        }
        //cout<<ans<<endl;
        while(b>0 || r){
            //string tem="";
            for(int i=0; i<x-1; i++){
                if(r>0) ans+='R';
                r--;
                //tem+='R';
            }
            if(b>0) {
                ans+='B'; //tem+='B';
            }
            //cout<<tem<<endl;
            b--;
        }
        cout<<ans<<endl;
    }   
    return 0;
}