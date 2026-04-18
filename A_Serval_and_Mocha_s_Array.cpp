#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "Yes" << endl
#define cn cout << "No" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int gcd(int a, int b){
    while(b){
        int x=b;
        b=a%b;
        a=x;
    }
    return a;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // if any pair has gcd<=2 its possible
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        fn cin>>a[i];
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(gcd(a[i],a[j])<=2){
                    //cout<<gcd(a[i],a[j])<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag) cy;
        else cn;
    }
    return 0;
}