#include <bits/stdc++.h>
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        string p="";
        vector<int> in;
        for(int i=0;i<n;i++){
            if(s[i]=='1') {
                p+='1';
                in.push_back(i+1);
            }
        }
        cout<<p.size()<<endl;
        if(!in.empty()){
            for(auto i:in) cout<<i<<" ";
        }
        cout<<endl;
    }   
    return 0;
}