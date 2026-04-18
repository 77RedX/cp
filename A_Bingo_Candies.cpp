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
        unordered_map<int,int> m;
        vector<vector<int>> a(n,vector<int>(n));
        int flag=0;
        fn{
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                m[a[i][j]]++;
                if(m[a[i][j]]>n*(n-1)) flag=1;
            }
        }
        if(flag) cn;
        else cy;

    }   
    return 0;
}