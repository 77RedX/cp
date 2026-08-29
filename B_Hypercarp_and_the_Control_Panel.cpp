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
        vi a(n);
        fn cin>>a[i];
        vector<int> block;
        vector<int> size;
        for(int i=0; i<n; i++){
            if(block.empty() || block.back()!=a[i]){
                block.push_back(a[i]);
                size.push_back(1);
            }
            else{
                size.back()++;
            }
        }
        int m=block.size();
        int ans=m;
        for(int i=0; i<m-1; i++){
            if(size[i+1]>=2 && size[i]>=2){
                ans=max(ans, m+2);
            }
        }
        for(int i=0; i<m; i++){
            if(size[i]>=2){
                if(i>0 && ((i-1==0) || block[i-2]!=block[i])){
                    ans=max(ans, m+1);
                }
                if(i<m-1 && ((i+1==m-1) || block[i+2]!=block[i])){
                    ans=max(ans, m+1);
                }
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}