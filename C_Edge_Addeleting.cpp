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
        int n, m;
        cin>>n>>m;
        vector<vector<int>> adj(n);
        for(int i=0; i<n-1; i++){
            int x, y;
            cin>>x>>y;
            adj[x-1].push_back(y-1);
            adj[y-1].push_back(x-1);
        }
        vector<int> queries;
        for(int i=0; i<m; i++){
            int x;
            cin>>x;
            queries.push_back(x-1);
        }
        vector<int> dist(n, 1e9);
        queue<int> q;
        q.push(n-1);
        dist[n-1]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            if(node==0){
                continue;
            }
            for(auto i: adj[node]){
                if(dist[node]+1<dist[i]){
                    dist[i]=dist[node]+1;
                    q.push(i);
                }
            }
        }
        int ans=dist[0];
        for(auto i: queries){
            if(dist[i]==1e9) continue;
            ans=max(ans, dist[i]+1);
        }
        cout<<ans<<endl;
    }   
    return 0;
}