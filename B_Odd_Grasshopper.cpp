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
        int x,n;
        cin>>x>>n;
        // if 4 steps are executed then no movement done
        int total;
        if(n%4==1){
            total=-n;
        }
        else if(n%4==2){
            total=1;
        }
        else if(n%4==3){
            total=n+1;
        }
        else{
            total=0;
        }
        if(x%2){
            cout<<x-total<<endl;
        }
        else{
            cout<<x+total<<endl;
        }
    }   
    return 0;
}