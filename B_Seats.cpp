#include <bits/stdc++.h>
//#define int long long
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
        vector<pair<int,int>> v; //lenght,no. of ones surrounding
        int ans=0;
        int flag=0;
        int one=0;
        int l=0;
        fn{
            if(s[i]=='1') {
                one++;
                flag++;
                if(l>0){
                    v.push_back({l,min(flag,2)});
                    l=0;
                    flag=1;
                }
            }
            else if(s[i]=='0') l++;
        }
        ans+=one;
        //cout<<one<<endl;
        if(l>0) v.push_back({l,min(flag,2)});
        for(auto i:v){
            //cout<<i.first<<" "<<i.second<<endl;
            ans+=i.first/3;
            if(i.second==0) ans+=min(1,(i.first%3));
            if(i.second==1) ans+=max(0,(i.first%3)-1);    
        }
        cout<<ans<<endl;
        //cout<<endl;
    }
    return 0;
}
// overcomplicated code lmao