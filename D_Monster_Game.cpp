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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vi pref(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(i==0) pref[i]=b[i];
            else pref[i]=pref[i-1]+b[i];
        }
        sort(a.begin(),a.end(),greater<int> ()); //descending
        int max=0;
        fn{
            if(pref[i]<=n){
                //cout<<"if\n";
                int x=a[pref[i]-1];
                int score=(i+1)*x;
                if(max<score){
                    max=score;
                }
            }
        }
        cout<<max<<endl;
    }   
    return 0;
}