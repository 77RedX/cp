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
    int n, d;
    cin>>n>>d;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.rbegin(), a.rend());
    int i=0;
    int ans=0;
    int total=n;
    //cout<<total<<endl;
    while(total){
        if(total>=((d/a[i])+1))
        {
            total-=((d/a[i])+1);
            i++;
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}