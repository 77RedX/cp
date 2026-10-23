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
        vector<pair<int,int>> a, b , c;
        fn{
            int x;
            cin>>x;
            a.push_back({x, i});
        }
        fn{
            int x;
            cin>>x;
            b.push_back({x, i});
        }
        fn{
            int x;
            cin>>x;
            c.push_back({x, i});
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());
        int ans=0;
        for(int i=0; i<3; i++){
            int x=a[i].first;
            int da=a[i].second;
            for(int j=0; j<3; j++){
                int y=b[j].first;
                int db=b[j].second;
                if(da==db) continue;
                for(int k=0; k<3; k++){
                    int z= c[k].first;
                    int dc= c[k].second;
                    if(dc==da || dc==db) continue;
                    //cout<<da<<" "<<db<<" "<<dc<<endl;
                    ans=max(ans, x+y+z);
                }
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}