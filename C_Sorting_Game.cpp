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
        string s;
        cin>>s;
        int flag=0;
        string copy =s;
        sort(s.begin(),s.end());
        if(s==copy) cout<<"Bob\n"; //already sorted tha
        else{
            cout<<"Alice\n";
            vi ans;
            for(int i=0;i<n;i++){
                if(s[i]!=copy[i]){
                    ans.push_back(i+1);
                }
            }
            cout<<ans.size()<<endl;
            for(auto i:ans){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }   
    return 0;
}