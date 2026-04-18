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
        int a,b,xk,yk,xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;
        vi dc={a,a,-a,-a,b,b,-b,-b};
        vi dr={-b,b,-b,b,-a,a,-a,a};
        int cnt=0;
        set<pair<int,int>> k;
        set<pair<int,int>> q;
        //for king
        for(int i=0;i<8;i++){
            int delc=dc[i];
            int delr=dr[i];
            k.insert({xk+delc,yk+delr});
        }
        //for queen
        for(int i=0;i<8;i++){
            int delc=dc[i];
            int delr=dr[i];
            q.insert({xq+delc,yq+delr});
        }
        for(auto i:k){
            if(q.find(i)!=q.end()){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}