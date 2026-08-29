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
        int n,p;
        cin>>n>>p;
        vector<pair<int,int>> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back({-1, x});
        }
        for(int i=0; i<n; i++){
            int y;
            cin>>y;
            a[i].first=y;
        }
        sort(a.begin(), a.end()); //asc order
        int cost=0;
        int l=0;
        int r=0;
        if(a[l].first>p){
            cost+=p*n;
            cout<<cost<<endl;
            continue;
        }
        cost+=p;
        int c=a[l].first;
        while(c<=p){
            cost+=c*(min(a[l].second, n-1-r));
            r+=a[l].second;
            if(r>=n-1) break;
            l++;
            c=a[l].first;
        }
        if(r<n-1){
            cost+=(n-1-r)*p;
        }
        cout<<cost<<endl;
    }   
    return 0;
}