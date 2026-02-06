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
        fn{
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int index=0;
        int l=1;
        int ml=l;
        for(int i=0;i<n;i++){
            if(i+1<n && a[i+1]-a[i]<2){
                if(a[i+1]-a[i]>0) l++;
                ml=max(ml,l);
            }
            else{
                l=1;
            }
        }   
        cout<<ml<<endl;
    }
    return 0;
}