#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
using namespace std;
int combination(int x){
    return (x*(x-1))/2;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int odd=0,even=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2)odd++;
        else even++;
    }
    int ans=0;
    ans=combination(even)+combination(odd);
    cout<<ans;
    return 0;
}