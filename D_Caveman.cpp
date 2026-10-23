// #include <bits/stdc++.h>
// #define int long long
// #define MXI 1000000007LL
// #define vi vector<int>
// #define cy cout << "YES" << endl
// #define cn cout << "NO" << endl
// #define fn for(int i=0;i<n;i++)
// using namespace std;
// int solve(vector<vector<int>> &adj, int node, vector<int> &vis, int &cycle){
//     //bfs easier
//     queue<pair<int, int>> q;
//     q.push({node, 1});
//     int size=0;
//     while(!q.empty()){
//         int tn=q.front().first;
//         int color=q.front().second;
//         q.pop();
//         if(vis[tn]!=0){
//             continue;
//             cycle++;
//         }
//         size++;
//         vis[tn]=color; //colored
//         for(auto i: adj[tn]){
//             if(!vis[i]) q.push({i, -color});
//         }
//     }
//     return size;
// }
// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int n, m;
//         cin>>n>>m;
//         //cout<<n<<" "<<m<<endl;
//         vector<vector<int>> adj(n);
//         for(int i=0; i<m; i++){
//             int x, y;
//             cin>>x>>y;
//             //cout<<x<<" "<<y<<endl;
//             adj[x-1].push_back(y-1);
//             adj[y-1].push_back(x-1);
//         }
//         //cout<<"test\n";
//         vector<int> vis(n, 0); //0 NV, 1 R, -1 B
//         vector<int> sizes;
//         int bm=0;
//         // for(int i=0; i<n; i++){
//         //     cout<<i<<":";
//         //     for(auto j: adj[i]){
//         //         cout<<j<<" ";
//         //     }
//         //     cout<<endl;
//         // }
//         for(int i=0; i<n; i++){
//             if(!vis[i]){
//                 int cycle=0;
//                 int size = solve(adj, i, vis, cycle);
//                 sizes.push_back(size);
//                 //cout<<size<<endl;
//                 if(size<2 || size==-1e5){
//                     bm++;
//                     break;
//                 }
//             }
//         }
//         if(bm){
//             cout<<"Brain Melt\n";
//             continue;
//         }
//         else{
//             int count=0;
//             for(auto i: sizes){
//                 count+=i;
//             }
//             if(count>2){
//                 cout<<"Many\n";
//             }
//             else{
//                 cout<<2<<endl;
//             }
//         }
//     }   
//     return 0;
// }

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
        for(int i=0; i<m; i++){
            int x, y;
            cin>>x>>y;
            adj[x-1].push_back(y-1);
            adj[y-1].push_back(x-1);
        }
        vi in(n, 0);
        for(int i=0; i<n; i++){
            for(auto j: adj[i]){
                in[j]++;
            }
        }
        //1 node allowed to have higher than 1 degree, others should have exactly 1, if 0 indegree then brain melt
        int many=0;
        int zero=0;
        int maxi=0;
        for(int i=0; i<n; i++){
            if(in[i]==0) zero++;
            if(in[i]>1) many++;
            maxi=max(maxi, in[i]);
        }
        if(zero){
            cout<<"Brain Melt\n";
        }
        else if(many<2 && maxi==n-1){
            cout<<"2\n";
        }
        else{
            cout<<"Many\n";
        }
    }   
    return 0;
}