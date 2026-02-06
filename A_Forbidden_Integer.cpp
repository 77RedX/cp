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
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        int p=0;
        bool poss=true;
        if(x==1){
            if(n==1) poss=false;
            if(n==2 && k!=2) poss=false;
            if(n==3 && k!=3) poss=false;
            if(n>3){
                if(!(n%2) && k<2) poss=false;
                if(n%2 && k<3) poss=false;
            }
            if(poss){
                cy;
                p=1;
            }
            else cn;
        }
        else{
            cy;
            p=2;
        }
        if(p==2){
            cout<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        if(p==1){
            cout<<n/2<<endl;
            if(n%2){
                for(int i=0;i<(n/2)-1;i++){
                    cout<<2<<" ";
                }
                cout<<3<<" ";
                cout<<endl;
            }
            else{
                for(int i=0;i<n/2;i++){
                    cout<<2<<" ";
                }
                cout<<endl;
            }
        }
        
    }
    return 0;
}