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
        int ans=0;
        int flag=0;
        fn{
            if(a[i]!=0){
                flag=1;
            }
            else{
                if(flag==1){
                    ans++;
                }
                flag=0;
            }
            
        }
        if(flag==1) ans++;
        cout<<min(ans,2LL)<<endl;
    }   
    return 0;
}