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
        vi pref1(n+1, 0);
        vi pref2(n+1, 0);
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==1){
                pref1[i+1]=pref1[i]+1;
            }
            else{
                pref1[i+1]=pref1[i]-1;
            }
            if(a[i]==1 || a[i]==2){
                pref2[i+1]=pref2[i]+1;
            }
            else{
                pref2[i+1]=pref2[i]-1;
            }
        }
        vi suff(n+1);
        suff[n-1]=pref2[n-1];
        for(int i=n-2; i>=1; i--){
            suff[i]=max(suff[i+1], pref2[i]);
        }
        int flag=0;
        for(int i=1; i<=n-2 ;i++){
            if(pref1[i]>=0 && suff[i+1]>=pref2[i]){
                flag=1;
                break;
            }
        }
        if(flag) cy;
        else cn;
    }
    return 0;
}