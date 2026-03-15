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
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(i==0){ // pls work im poor
            if(s[i]=='9'){
                continue;
            }
        }
        if(s[i]>='5'){
            s[i]='0'+('9'-s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}