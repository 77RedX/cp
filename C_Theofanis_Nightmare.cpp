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
    while(t--){// using suffix
        int n;
        cin>>n;
        vi a(n);
        fn{
            cin>>a[i];
        }
        vi suff(n);
        for(int i=n-1;i>=0;i--){
            if(i==n-1) suff[i]=a[i];
            else suff[i]=a[i]+suff[i+1];
        }
        vi hello;
        int lp=n;
        for(int i=n-1;i>=0;i--){
            if(suff[i]>0){
                if(lp==n){
                    lp=i;
                    hello.push_back(suff[i]);
                }
                else{
                    hello.push_back(suff[i]-suff[lp]);
                    lp=i;
                }
            }
        }
        if(suff[0]<0){//last suffix(s) -ve
            if(lp==n)hello.push_back(suff[0]); //all suffix 0
            else hello.push_back(suff[0]-suff[lp]);    
        }
        int x=hello.size();
        //cout<<x<<endl;
        int ans=0;
        for(auto i:hello){
            //cout<<x*i<<" ";
            ans+=x*i;
            x--;
        }
        cout<<ans<<endl;
    }   
    return 0;
}//accepted