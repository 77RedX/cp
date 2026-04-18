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
        int cnt=0;
        fn {
            cin>>a[i];
        }
        //same parity pairs check
        for(int i=1;i<n;i++){
            if((a[i]&1)==(a[i-1]&1)){//same parity
                //cout<<a[i]<<" ";
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}