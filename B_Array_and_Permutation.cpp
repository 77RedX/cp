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
        fn cin>>a[i];
        fn cin>>b[i];
        // fn solulu
        map<int,int> m;
        fn{
            m[a[i]]=i; // number:index pair;
        }
        int flag=0;
        fn{
            if(i==n-1) continue;
            if(b[i]!=b[i+1]){//change in number
                if(m[b[i]]>m[b[i+1]]){
                    flag++;
                }
            }
        }
        if(flag) cn;
        else cy;
    }
    return 0;
}