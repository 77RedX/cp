#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int solve(int n){
    int x=n;
    vector<int> a(10, -1);
    while(x){
        a[x%10]=1;
        x/=10;
    }
    for(int i=1; i<10; i++){
        if(a[i]==1){
            if(n%i){
                n=solve(n+1); //taking crazy mem icl
                break;
            }
        }
    }
    return n;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n=solve(n);
        cout<<n<<endl;
    }
    return 0;
}