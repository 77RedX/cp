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
        int n;
        cin>>n;
        string s;
        cin>>s;
        //only 1 rotation matters
        int blocks=1;
        int size=1;
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]) {
                blocks++;
            }
            else{
                size++;
                if(size>=2) flag++;
            }
        }
        if(s[0]!=s[n-1] && flag) blocks+=1;
        int ans=blocks;
        cout<<ans<<endl;
    }   
    return 0;
}