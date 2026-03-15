#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
void solve(int n, int h, int k, vi &a){
    int maxi=a[0];
    int maxidx=0;
    fn{
        if(a[i]>maxi){
            maxi=a[i];
            maxidx=i;
        }
    }
    //simulate game
    vi pref(n);
    fn{
        if(i==0){
            pref[0]=a[i];
        }
        else{
            pref[i]=pref[i-1]+a[i];
        }
    }
    int rounds=h/pref[n-1];
    //cout<<rounds<<endl;
    int ans=(k+n)*rounds; //mag reloads
    int rem=h%pref[n-1]; //remaining hp
    int swapidx=0;
    if(rem==0){
    ans=rounds*n+(rounds-1)*k;
    }
    else{
    fn{
        if(pref[i]-a[i]+maxi>=rem){//swap
            swapidx=i;
            break;
        }
    }
    swap(a[swapidx],a[maxidx]);
    fn{ // new pref
        if(i==0){
            pref[0]=a[i];
        }
        else{
            pref[i]=pref[i-1]+a[i];
        }
    }        
    fn{
        if(pref[i]>=rem){
            ans+=(i+1);
            break;
        }
    }
    }
    cout<<ans<<endl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,h,k;
        cin>>n>>h>>k;
        vi a(n);
        fn cin>>a[i];
        solve(n,h,k,a);
    }
    return 0;
}// failed, try again