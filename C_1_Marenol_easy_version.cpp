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
        string a;
        string b;
        cin>>n>>a>>b;
        int flag=0;
        int evena=0, evenb=0, odda=0, oddb=0;
        for(int i=0; i<n; i++){
            if(a[i]=='1'){
                if(i%2)odda++;
                else evena++;
            }
            if(b[i]=='1'){
                if(i%2) oddb++;
                else evenb++;
            }
        }
        if(evena!=evenb || odda!=oddb){
            flag=1;
        }
        if(flag) cn;
        else cy;
    }   
    return 0;
}