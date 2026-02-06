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
    //ez problem
    //https://codeforces.com/problemset/problem/2193/C
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vi a(n),b(n);
        pair<int,int> ma={0,0};
        fn{
            cin>>a[i];
        }
        fn{
            cin>>b[i];
        }
        fn{
            if(a[i]<b[i]){
                a[i]=b[i];
            }
        }
        for(int i=n-1;i>=0;i--){
            if(i-1>=0 && a[i]>a[i-1]){
                a[i-1]=a[i];
            }
        }
        vi pre(n);
        pre[0]=a[0];
        fn{
            if(i>0)pre[i]=pre[i-1]+a[i];
        }
        for(int i=0;i<q;i++){
           int l,r;
           cin>>l>>r;
           //cout<<l<<r<<endl;
           int sum=0;
           if(l==1) sum+=pre[r-1];
           else sum+=pre[r-1]-pre[l-2];
           cout<<sum<<" ";
        }
        cout<<endl;
    }   
    return 0;
}