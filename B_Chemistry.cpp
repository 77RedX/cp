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
        int n,k;
        cin>>n>>k;
        unordered_map<char,int> m;
        for(int i=0;i<n;i++){
            char ch;
            cin>>ch;
            m[ch]++;
        }
        int odd=0;
        for(auto i:m){
            if(i.second%2) odd++;
        }
        //either make the total number of odds 0 or 1 odd element left, thats the only possibility
        if(odd-k>1){
            cout<<"NO\n";
        }
        else cy; 
    }
    return 0;
}