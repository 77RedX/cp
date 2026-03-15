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
        fn cin>>a[i];
        int x=0;
        fn{
            if(i==n-1) continue;
            if((a[i+1]==(7-a[i])) || a[i+1]==a[i]){
                x++;
                i++; //checked for next element too
            }
        }
        cout<<x<<endl;
    }
    return 0;
}