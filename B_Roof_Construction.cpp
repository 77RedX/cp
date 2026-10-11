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
        //we find highest power of 2 right b4 that number and insert a 0 in bw that 2 power and before it.
        int idx=0;
        for(int i=0; i<n; i++){
            //cout<<i<<endl;
            if(i>0 && (i&(i-1))==0){
               idx=i;
            }
        }
        //cout<<idx<<endl;
        for(int i=0; i<n; i++){
            if(i<idx-1){
                cout<<i+1<<" ";
            }
            else if(i==idx-1){
                cout<<"0 ";
            }
            else{
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}