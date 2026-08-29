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
        int a,b,c;
        cin>>a>>b>>c;
        int ans=0;
        while(a!=b && b!=c && a!=c){
            if(a>b){
                if(a>c){
                    a--;
                    if(b>c){
                        c++;
                    }
                    else{
                        b++;
                    }
                }
                else{
                    c--;
                    b++;
                }
            }
            else{
                if(b>c){
                    b--;
                    if(a>c){
                        c++;
                    }
                    else{
                        a++;
                    }
                }
                else{
                    c--;
                    a++;
                }
            }
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}