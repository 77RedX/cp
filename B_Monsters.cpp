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
        vector<int> a(n);
        fn{
            cin>>a[i];
        }
        // priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
        vector<pair<int,int>> ans;
        for(int i=0; i<n; i++){
            // q.push({a[i]%k, i+1});
            int rem=a[i]%k?a[i]%k: k;
            ans.push_back({rem, n-i});
        }
        sort(ans.begin(), ans.end(), greater<pair<int,int>>());
        // while(!q.empty()){
        //     int x=q.top().first;
        //     int idx=q.top().second;
        //     q.pop();
        //     if(x-k>0){
        //         q.push({x-k, idx});
        //     }
        //     else{
        //         ans.push_back(idx);
        //     }
        // }
        for(auto i: ans){
            cout<<n-i.second+1<<" ";
        }
        cout<<endl;
    }   
    return 0;
}