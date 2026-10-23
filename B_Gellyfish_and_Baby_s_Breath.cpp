#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
#define MOD 998244353
using namespace std;
int expo2(int x){
    if(x==0) return 1;
    if(x==1) return 2;
    int half = expo2(x/2)%MOD;
    int res=(half*half)%MOD;
    return x%2?(res*2)%MOD:res;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        vector<int> q(n);
        for(int i=0;i<n;i++) cin>>p[i];
        for(int i=0;i<n;i++) cin>>q[i];
        vi pref1(n);
        vi pref2(n);
        pref1[0]=0;
        pref2[0]=0;
        for(int i=1; i<n; i++){
            if(p[pref1[i-1]]<p[i]){
                pref1[i]=i;
            }
            else{
                pref1[i]=pref1[i-1];
            }
            if(q[pref2[i-1]]<q[i]){
                pref2[i]=i;
            }
            else{
                pref2[i]=pref2[i-1];
            }
        }
        // for(auto i : pref1){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for(auto i : pref2){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        vector<int> res;
        for(int i=0; i<n; i++){
            if(p[pref1[i]]>q[pref2[i]]){
                int x=pref1[i];
                int y=i-x;
                //cout<<(1LL<<q[x])<<" "<<(1LL<<p[y])<<endl;
                res.push_back((expo2(p[x])+expo2(q[y]))%MOD);
            }
            else if(p[pref1[i]]<q[pref2[i]]){ // should work ig?
                int x=pref2[i];
                int y=i-x;
                //cout<<(1LL<<q[x])<<" "<<(1LL<<p[y])<<endl;
                res.push_back((expo2(q[x])+expo2(p[y]))%MOD);
            }
            else{
                if(q[i-pref1[i]]>p[i-pref2[i]]){
                    // cout<<(1LL<<p[pref1[i]])<<" "<<(1LL<<q[i-pref1[i]])<<endl;
                    res.push_back((expo2(p[pref1[i]])+expo2(q[i-pref1[i]]))%MOD);
                }
                else{
                    // cout<<q[pref2[i]]<<" "<<(1LL<<p[i-pref2[i]])<<endl;
                    res.push_back((expo2(q[pref2[i]])+expo2(p[i-pref2[i]]))%MOD);
                }
            }

        }
        for(auto i: res){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}