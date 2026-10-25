#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;

bool check(unordered_map<char,int> mpp){
    for(char i='1'; i<='3'; i++){
        if(mpp[i]==0) return false;
    }
    return true;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int l=0, r=0;
        unordered_map<char,int> mpp;
        int ans=1e9;
        while(r<n){
            while(r<n && !check(mpp)){
                mpp[s[r]]++;
                r++;
            }
            //cout<<l<<" "<<r<<endl;
            //for(auto i: mpp) cout<<i.first<<" "<<i.second;
            //cout<<endl;
            //valid formed here
            while(l<=r && check(mpp)){
                //cout<<"yes";
                ans=min(ans, r-l);
                mpp[s[l]]--;
                l++;
            }

        }
        //cout<<ans<<endl;
        if(ans==1e9) ans=0;
        cout<<ans<<endl;
    }   
    return 0;
}