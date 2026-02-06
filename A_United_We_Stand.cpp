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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end()); 
        int lb=count(a.begin(),a.end(),a[0]);
        if(lb==n) cout<<-1<<endl;
        else{
            cout<<lb<<" "<<n-lb<<endl;
            for(int i=0;i<lb;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int i=lb;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }   
    return 0;
}