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
        int count=INT_MAX;
        vi a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0){
                count=min(count,(a[i]-a[i-1]));
            }
        }
        // cout<<count<<endl;
        if(count<0) cout<<"0"<<endl;
        else cout<<(count/2)+1<<endl;
    }   
    return 0;
}