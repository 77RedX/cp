#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "-1" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        string a;
        string b;
        cin>>n>>a>>b;
        vector<int> evena, evenb, odda, oddb;
        for(int i=0; i<n; i++){
            if(a[i]=='1'){
                if(i%2)odda.push_back(i);
                else evena.push_back(i);
            }
            if(b[i]=='1'){
                if(i%2) oddb.push_back(i);
                else evenb.push_back(i);
            }
        }
        if(evena.size()!=evenb.size() || odda.size()!=oddb.size()){
            cn;
        }
        else{
            int ans=0;
            for(int i=0; i<evena.size(); i++){
                ans+=abs(evena[i]-evenb[i])/2;
            }
            for(int i=0; i<odda.size(); i++){
                ans+=abs(odda[i]-oddb[i])/2;
            }
            cout<<ans<<endl;
        }
    }   
    return 0;
}