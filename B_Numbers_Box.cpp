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
        int n, m;
        cin>>n>>m;
        vector<vector<int>> a(n, vector<int> (m));
        int mini=INT_MAX;
        int neg=0;
        int sum=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
                if(a[i][j]<0) neg++;
                sum+=abs(a[i][j]);
                mini=min(mini, abs(a[i][j]));
            }
        }
        if(neg%2) sum-=2*mini;
        cout<<sum<<endl;

    }
    return 0;
}