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
        int broken=0;
        int ans=0;
        for(int i=n-1;i>0;i--){
            if(a[i]>a[i-1]){
                continue;
            }
            else{
                if(a[i]==0){
                    broken=1;
                    break;
                }
                while(a[i]<=a[i-1] && a[i-1]>0){
                    a[i-1]=a[i-1]/2;
                    ans++;
                }
            }
        }
        if(broken){
            cout<<"-1\n";
        }
        else{
            cout<<ans<<endl;
        }
    }   
    return 0;
}