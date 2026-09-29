#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
       int n,a,b;
       cin >> n >> a >> b;
       if(2*a <= b)
       {
        cout << a*n << endl;
       }
       else cout << n/2*b+(n%2)*a << endl;
    }
    return 0;
}