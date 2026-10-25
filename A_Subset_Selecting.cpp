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
        int n, k;
        cin>>n>>k;
        vi a(n);
        vector<int> mpp(100+1, 0);
        for(int i=0; i<n; i++){
            cin>>a[i];
            mpp[a[i]]++;
        }
        int maxposs=0;
        for(int i=0; i<=100; i++){
            if(mpp[i]==0){
                maxposs=i;
                break;
            }
        }
        int ans=0;
        int carry=0;
        for(int i=0; i<=maxposs; i++){
            //cout<<mpp[i]<<" ";
            //cout<<carry<<endl;
            if((mpp[i]+carry)>=k){
                carry=(carry+mpp[i])-k;
                ans=min(maxposs, i+1);
                continue;
            }
            else{
                break;
            }
        }
        //cout<<endl;
        cout<<ans<<endl;

    }
    return 0;
}