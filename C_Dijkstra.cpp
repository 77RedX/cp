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
    int n, m;
    cin>>n>>m;
    vector<vector<pair<int,int>>> adj(n);
    for(int i=0; i<m; i++){
        int a,b,w;
        cin>>a>>b>>w;
        adj[a-1].push_back({b-1, w});
        adj[b-1].push_back({a-1, w});
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q; //min heap
    vector<int> dist(n, 1e15);
    vector<int> path(n, -1);
    path[0]=0;
    dist[0]=0;
    q.push({0, 0});
    while(!q.empty()){
        int w = q.top().first;
        int node = q.top().second;
        q.pop();
        if(node==n-1){
            break;
        }
        for(auto i: adj[node]){
            if(dist[i.first]>i.second+w){
                dist[i.first]=i.second+w;
                path[i.first]=node;
                q.push({dist[i.first], i.first});
            }
        }
    }
    if(path[n-1]==-1){ //unreachable
        cout<<-1<<endl;
    }
    else{
        vector<int> ans;
        ans.push_back(n-1);
        int node=n-1;
        while(node!=0){
            ans.push_back(path[node]);
            node=path[node];
        }
        reverse(ans.begin(), ans.end());
        // cout<<"test"<<endl;
        for(auto i: ans){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}