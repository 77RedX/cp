#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
bool compare(const vector<int> &a, const vector<int> &b){
    return a[0]<b[0];
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> v(n, vector<int> (2));
        for(int i=0; i<n; i++){
            int m;
            cin>>m;
            vector<int> x(m);
            for(int i=0; i<m; i++){
                cin>>x[i];
            }
            sort(x.begin(), x.end());
            v[i][0]=x[0]; //min and 2nd min only stored
            v[i][1]=x[1];
        }
        int mini=INT_MAX;
        int ans=0;
        int mini1=INT_MAX;
        for(int i=0; i<n; i++){
            mini1=min(mini1, v[i][0]);
            mini=min(mini, v[i][1]);
            ans+=v[i][1];
        }
        ans-=mini;
        ans+=mini1;
        cout<<ans<<endl;
    }
    return 0;
}