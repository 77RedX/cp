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
        if(n%2==0){
            //no interference
            //k%n place
            cout<<((k-1)%n)+1<<endl; //1th indx fix
        }
        else{
            //interference
            //2k/n times interference
            cout<<((((k-1)%n)+((k-1))/(n/2))%n)+1<<endl;
        }
    }
    return 0;
}