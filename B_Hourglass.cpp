#include <bits/stdc++.h>
#define MXI 1000000007LL
#define int long long
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
        int s,k,m;
        cin>>s>>k>>m;
        int turn=m/k;
        int rem=0;
        //if remaining logic is corrected, answer should come
        if(turn%2){// odd reset, remaining sand is s-k at top, k at bottom, flip it then to achieve either s or k, whichever is smaller
            rem=min(s,k);
        }
        else{//pls be correct logic im poor
            rem=s;
        }
        //cout<<rem<<endl;
        int time=m%k;
        cout<<max(rem-time,0LL)<<endl;
    }
    return 0;
}