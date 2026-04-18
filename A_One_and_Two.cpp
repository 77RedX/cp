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
        int c=0;
        fn{
            cin>>a[i];
            if(a[i]==2) c++;
        }
        if(c%2){
            cout<<"-1\n";
            continue;
        }
        if(c==0){
            cout<<"1\n";
            continue;
        }
        int occ=0;
        fn{
            if(a[i]==2) occ++;
            if(occ==c/2){
                cout<<i+1<<endl;
                break;
            }
        }
    }   
    return 0;
}