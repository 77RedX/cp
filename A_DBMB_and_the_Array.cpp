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
        int n,x,s;
        cin>>n>>s>>x;
        int sum=0;
        fn{
            int in;
            cin>>in;
            sum+=in;
        }
        //cout<<sum<<" ";
        if(s>=sum && (s-sum)%x==0) cy;
        else cn;
    }   
    return 0;
}