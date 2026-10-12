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
        int n, k;
        cin>>n>>k;
        vi a(n);
        map<int,int> mpp;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            mpp[a[i]%k]++;
        }
        int ans=0;
        for(auto i: mpp){
            if(i.second==0) continue;
            // cout<<i.first<<" "<<i.second<<endl;
            if(i.first==0){
                ans+=1;
                // cout<<"add 0\n";
            }
            else if(mpp[k-i.first]>0){
                if(i.first*2 == k ){
                    ans+=1;
                    // cout<<"add 1\n";
                }
                else{
                    int a=min(i.second, mpp[k-i.first]);
                    int b=max(i.second, mpp[k-i.first]);
                    if(b>a+1) {
                        ans+=b-(a+1); 
                        // cout<<"add 2\n";
                    }
                    ans+=1;
                    // cout<<"add 3\n";
                }
                mpp[i.first]=0;
                mpp[k-i.first]=0;
            }
            else{
                ans+=i.second;
                // cout<<"add 4\n";
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}