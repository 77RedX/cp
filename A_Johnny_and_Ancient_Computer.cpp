#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int findmsb(int x){
    int res=0;
    while(x){
        x/=2;
        res++;
    }
    return 1LL<<(res-1);
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b>a && b&1){
            cout<<"-1\n";
        }
        else if(b==a){
            cout<<"0\n";
        }
        else{
            if(b>a){
                //MSB to MSB
                int msba = findmsb(a);
                int msbb = findmsb(b);
                if(msbb<msba){
                    cout<<"-1\n";
                    continue;
                }
                int ratio = msbb/msba;
                if(b%ratio!=0 || b/ratio!=a){
                    cout<<"-1\n";
                    continue;
                }
                int dist=0;
                while(msbb>msba){
                    msbb/=2;
                    dist++;
                }
                int ans=dist/3;
                dist-=(dist/3)*3;
                ans+=dist/2;
                dist-=(dist/2)*2;
                ans+=dist/1;
                cout<<ans<<endl;
            }
            else{
                //LSB to LSB
                int lsba = a&-a;
                int lsbb = b&-b;
                if(lsba<lsbb){
                    cout<<"-1\n";
                    continue;
                }
                int ratio = lsba/lsbb;
                if(a%ratio!=0 || a/ratio!=b){
                    cout<<"-1\n";
                    continue;
                }
                int dist=0;
                while(lsba>lsbb){
                    lsba/=2;
                    dist++;
                }
                int ans=dist/3;
                dist-=(dist/3)*3;
                ans+=dist/2;
                dist-=(dist/2)*2;
                ans+=dist/1;
                cout<<ans<<endl; 
            }
        }
    }
    return 0;
}