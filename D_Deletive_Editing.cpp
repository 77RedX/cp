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
        string s,x;
        cin>>s>>x;
        if(x.size()>s.size()){
            cn;
            continue;
        }
        unordered_map<char,int> m;
        for(auto i:x){
            m[i]++;
        }
        for(int i=s.size()-1;i>=0;i--){
            if(m[s[i]]){
                m[s[i]]--;
            }
            else{
                s[i]='.';
            }
        }
        //cout<<s<<endl;
        string final="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='.') final+=s[i];
        }
        if(final==x){
            cy;
        }
        else cn;
    }   
    return 0;
}