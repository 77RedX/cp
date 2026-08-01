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
        if(n%12==10){
            if(n<22 || (n-22)%12) cout<<-1<<endl;
            else cout<<22<<" "<<n-22<<endl;
        }
        else cout<<n%12<<" "<<n-(n%12)<<endl;
    }
    return 0;
}