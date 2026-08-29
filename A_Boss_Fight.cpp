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
        unordered_map<int,int> m;
        int flag=0;
        int sum=0;
        int maxi=0;
        fn{
            cin>>a[i];
            m[a[i]]++;
            sum+=a[i];
            if(2*m[a[i]]>(n+1)) {flag=1; maxi=a[i];}
        }
        if(!flag){// no issues
            cout<<sum<<endl;
        }
        else{
            int others=n-m[maxi];
            m[maxi]-=((others)+2);
            sum-=m[maxi]*maxi;
            cout<<sum<<endl;
        }
    }   
    return 0;
}