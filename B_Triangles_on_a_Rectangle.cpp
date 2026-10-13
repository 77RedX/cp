#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int findarea(vector<int> &a){
    int x=abs(a[0]*(a[3]-a[4]) + a[1]*(a[5]-a[3]) + a[2]*(a[3]-a[4]));
    return x;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        vector<vector<int>> a(4); // 0 h 0 w
        for(int i=0; i<4; i++){
            int k;
            cin>>k;
            for(int j=0; j<k; j++){
                int p;
                cin>>p;
                a[i].push_back(p);
            }
        }
        int ans=0;
        for(int i=0; i<4; i++){
            int base=a[i].back()-a[i][0];
            int height=i<2?h:w;
            ans=max(ans, base*height);
        }
        cout<<ans<<endl;
    }
    return 0;
}