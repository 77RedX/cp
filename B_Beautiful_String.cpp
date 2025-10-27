#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
using namespace std;
bool check_decr(string s){
    for(int i=1;i<s.size();i++){
        if(s[i-1]>s[i]) return true;
    }
    return false;
}
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
        if(!check_decr(s)){
            cout<<s.size()<<endl;
            for(int i=1;i<=n;i++) cout<<i<<" ";
            cout<<endl;
        }
        
    }   
    return 0;
}