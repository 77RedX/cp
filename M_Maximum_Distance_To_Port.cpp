#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
using namespace std;
vector<vector<int>> cr_adj_list(int n, int m){
    vector<vector<int>> adj_list(n+1); // 1-based indexing
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    return adj_list;
}
vector<int> shortest_path(vector<vector<int>> adj_list){
    int start=1; //starting from node 1, all distances will be calculated
    int n=adj_list.size();
    vector<int> dist(n,1e9);
    queue<int> q;
    dist[start]=0;
    q.push(start);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto i: adj_list[node]){
            if(dist[node]+1<dist[i]){ // Can also use dist[i]==1e9, but Dijkstra algo uses this so just to keep things same
                dist[i]=dist[node]+1;
                q.push(i);
            }
        }
    }
    return dist;
}
vector<int> solution(vector<int> dist,vector<vector<int>> product){
    int k=product.size(); //actually k+1;
    vector<int> sol(k,0);
    for(int i=1;i<k;i++){
        for(auto j:product[i]){
            if(dist[j]>sol[i]){
                sol[i]=dist[j];
            }
        }
    }
    return sol;
}
vector<vector<int>> product(int n,int k){
    vector<vector<int>> pro(k+1); //k+1 size array because 1-based index;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pro[x].push_back(i+1); //product 1 is in these cities, 2 in these and so on, then we compare with product is the farthest
    }
    return pro;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> prod=product(n,k);
    vector<vector<int>> adj_list=cr_adj_list(n,m);
    vector<int> dist=shortest_path(adj_list);
    vector<int> sol=solution(dist, prod);
    for(int i=1;i<=k;i++){
        cout<<sol[i]<<" ";
    }
    return 0;
}