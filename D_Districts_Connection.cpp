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
        int n;
        cin>>n;
        vector<int> a(n);
        int poss=0;
        unordered_map<int,int> mpp;
        for(int i=0; i<n; i++){
            cin>>a[i];
            mpp[a[i]]=i; //last idx of the uniq
            if(mpp.size()>=2) poss=1;
        }
        if(!poss){
            cn;
            continue;
        }
        else{
            vector<pair<int,int>> ans;
            int last;
            for(auto i: mpp){ //uniq connections necessary
                if(ans.empty()){
                    last=i.second;
                    ans.push_back({-1, -1}); //dummy
                    continue;
                }
                ans.push_back({last, i.second});
            }
            for(int i=0; i<n; i++){
                if(mpp[a[i]]==i) continue; //already accounted for
                for(auto j: mpp){
                    if(j.first!=a[i]){
                        ans.push_back({i, j.second});
                        break;
                    }
               }
            }
            cy;
            for(auto i: ans){
                if(i.first==-1) continue;
                cout<<i.first+1<<" "<<i.second+1<<endl;
            }
        }
    }   
    return 0;
}