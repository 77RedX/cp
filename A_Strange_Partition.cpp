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
        int n,x;
        cin>>n>>x;
        vi a(n);
        fn cin>>a[i];
        int mini=0;
        fn{
            mini+=a[i];
        }
        if(mini%x) mini=(mini/x)+1;
        else mini=mini/x;
        int maxi=0;
        fn{
            if(a[i]%x) maxi+=(a[i]/x)+1;
            else{
                maxi+=a[i]/x;
            }
        }
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}