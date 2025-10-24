#include<bits/stdc++.h>
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
        vi b(n);
        vi a;
        for(int i=0;i<n;i++) {
            cin>>b[i];
            if(i>0){
                if(b[i-1]>b[i]){
                    a.push_back(b[i]);
                    a.push_back(b[i]);
                }
                else{
                    a.push_back(b[i]);
                }
            }
            else{
                a.push_back(b[i]);
            }
        }
        cout<<a.size()<<endl;
        for(auto i:a) cout<<i<<" ";
        cout<<endl;
    }   
    return 0;
}