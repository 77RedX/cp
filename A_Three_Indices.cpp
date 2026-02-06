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
        int flag=0;
        fn cin>>a[i];
        //fn cout<<a[i];
        //cout<<endl;
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                cout<<"YES\n";
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)cout<<"NO\n";
    }   
    return 0;
}