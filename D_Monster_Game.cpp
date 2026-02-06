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
        vi b(n);
        int level=0;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            sum+=b[i];
            if(sum<=n) level++;
        }
        cout<<level<<endl;
        sort(a.begin(),a.end(),greater<int>());
        int x=1; //multiplier
        for(int i=level;i>=0;i--){
            
        }
        
    }   
    return 0;
}