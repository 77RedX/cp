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
        int sum=0;
        vi a(3*n);
        int prev=(3*n)-1;
        for(int i=(3*n)-2;i>=1;i-=3){
            a[i]=prev;
            a[i+1]=prev+1;
            prev-=2;
        }
        int ini=1;
        for(int i=0;i<3*n;i+=3){
            a[i]=ini;
            ini++;
        }
        for(int i=0;i<3*n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }   
    return 0;
}