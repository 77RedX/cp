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
        n=7;
        vi a(n);
        fn cin>>a[i];
        sort(a.begin(),a.end());
        int sum=0;
        fn{
            if(i!=n-1) sum-=a[i];
        }
        sum+=a[n-1];
        cout<<sum<<endl;
    }   
    return 0;
}