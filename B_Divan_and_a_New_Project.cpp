#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> a;
        for(int i=1;i<=n;i++){
            int freq;
            cin>>freq;
            a.emplace_back(i,freq);
        }
        sort(a.begin(),a.end(),
        [](pair<int,int> a, pair<int,int> b) {
        return a.second > b.second;
    });
    vi pos(n+1,0);
    int p=(n+1)%2==0?(n+1)/2:(n/2)+1; //middle ya middle se ek pehle
    pos[0]=p;
    int total=0;
    int it=1;
    for(auto i:a){    
        pos[i.first]=p+it;
        int time=2*abs(it)*i.second;
        //cout<<time<<endl;
        total+=time;
        if(it<0){
            it=abs(it);
            it++;
        }
        else it=-it;
    }
    cout<<total<<endl;
    for(auto i: pos){
        cout<<i<<" ";
    }
    cout<<endl;
    }   
    return 0;
}