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
    int n;
    cin>>n;
    vi a(n);
    fn cin>>a[i];
    sort(a.begin(),a.end());
    int q;
    cin>>q;
    while(q--){
        int temp;
        cin>>temp;
        temp=upper_bound(a.begin(), a.end(), temp)-a.begin();
        cout<<temp<<endl;
    }
    return 0;
}