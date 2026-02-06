#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL 
#define vi vector<int> 
#define cy cout << "YES" << endl 
#define cn cout << "NO" << endl 
#define fn for(int i=0;i<n;i++)
using namespace std;
int world(long long n, long long k) {
    if(n < k) return -1;
    queue<pair<long long,int>> q;
    unordered_set<long long> vis;
    q.push(make_pair(n,0));
    vis.insert(n);
    while(!q.empty()) {
        pair<long long,int> cur=q.front();
        q.pop();
        long long x=cur.first;
        int steps=cur.second;
        if(x==k) return steps;
        if(x<k) continue;
        long long a=x/2;
        long long b=(x+1)/2;
        if(!vis.count(a)){
            vis.insert(a);
            q.push(make_pair(a, steps+1));
        }
        if(!vis.count(b)){
            vis.insert(b);
            q.push(make_pair(b, steps+1));
        }
    }
    return -1;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        cout<<world(n,k)<<"\n";
    }
}
