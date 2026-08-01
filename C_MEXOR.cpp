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
        int n,k;
        cin>>n>>k;
        int tar=n^k;
        if(n==1){
            if(!tar){
                cy;
                cout<<0<<endl;
            }
            else cn;
            continue;
        }
        int x=n-1;
        int p=1;
        while((p<<1)<=x){
            p<<=1;
        }
        int maxi=(p<<1)-1;
        if(tar>maxi){
            cn;
            continue;
        }
        cy;
        vector<int> a(n,0);
        a[n-1]=n;
        if(tar<=n-1){
            a[n-2]=tar;
        }
        else{
            a[n-2]=p;
            a[n-3]=tar^p;
        }
        vector<int> b(n);
        vector<int> vis(n, 0);
        int poss=n-1;
        for(int i=n-1; i>=0; i--){
            int req=(i==0)?0:a[i-1];
            if(a[i]>req){
                b[i]=req;
                vis[req]=1;
            }
            else{
                while(vis[poss]){
                    poss--;
                }
                b[i]=poss;
                vis[poss]=1;
            }
        }
        fn{
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }   
    return 0;
}