#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
vi prime;
void prime_check(){
    int maxi=1500000;
    vi pr(maxi+1,1);
    pr[0]=pr[1]=0;
    for(int i=2;i*i<=maxi;i++) {
        if (pr[i]){
            for(int j=i*i;j<=maxi;j+=i) {
                pr[j]=0;
            }
        }
    }
    for (int i=2;i<=maxi;i++) {
        if (pr[i]) {
            prime.push_back(i);
        }
    }
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    prime_check();
    while(t--){
        int n;
        cin>>n;
        vi ans;
        for(int i=0;i<n;i++){
            ans.push_back(prime[i]*prime[i+1]);
        }
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}