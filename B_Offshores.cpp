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
        int n,x,y;
        cin>>n>>x>>y;
        vi a(n);
        vi pref(n); //stores transaction number in prefix sum
        fn{
            cin>>a[i];
            int rub=a[i]/x;
            if(i==0) pref[i]=rub;
            else pref[i]=pref[i-1]+rub;
        }
        vi total(n);
        int ans=0;
        int maxi=0;
        int idx=0;
        fn{
            int transaction;
            if(i==0) transaction=pref[i];
            else transaction=pref[i]-pref[i-1];
            transaction=pref[n-1]-transaction;
            total[i]=a[i]+transaction*y;
            if(total[i]>maxi){
                maxi=total[i];
                idx=i;
            }
        }
        cout<<total[idx]<<endl;
    }   
    return 0;
}