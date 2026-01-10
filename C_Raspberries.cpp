#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //IET test question lol
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vi a(n);
        int even=0,odd=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]%2)odd++;
            else even++;
        }
        if(k==2){
            if(even) cout<<"0\n";
            else cout<<"1\n";
        }
        else if(k==4){
            bool div4 = false;
            int best = 2;
            for(int i = 0; i < n; i++){
                if(a[i] % 4 == 0) div4 = true;
                if(a[i] % 4 == 3) best = 1;
        }
 
    if(div4) cout << 0 << '\n';
    else if(even >= 2) cout << 0 << '\n';
    else if(even == 1) cout << 1 << '\n';
    else cout << best << '\n';
        }
        else if(k==5){
            int x=10;
            for(int i=0;i<n;i++){
                int ops;
                if(a[i]%k) ops=k-(a[i]%k);
                //else if(a[i]<k) ops=k-a[i];
                else ops=0;
                x=min(x,ops);
            }
            cout<<x<<endl;
        }
        else if(k==3){
            int x=10;
            for(int i=0;i<n;i++){
                int ops;
                if(a[i]%k) ops=k-(a[i]%k);
                else ops=0;
                x=min(x,ops);
            }
            cout<<x<<endl;
        }
    }
    return 0;
}
