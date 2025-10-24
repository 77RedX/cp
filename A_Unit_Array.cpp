#include<bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
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
        int sum=0;
        int ni=0;
        int step=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]<0) ni++;
            sum+=a[i];
        }
        if(sum<0){
            step+=abs(sum)/2;
            ni-=abs(sum)/2;
        }
        if(ni%2!=0){
            step++;
        }
        cout<<step<<endl;
    }
    return 0;
}