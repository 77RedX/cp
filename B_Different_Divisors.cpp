#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
vector<int> isprime(){
    vector<int> prime(1e5+1, 1);
    prime[0]=prime[1]=0;
    for(int i=2; i*i<=1e5; i++){
        if(prime[i]==0) continue;
        int j=i*i;
        while(j<=1e5){
            prime[j]=0;
            j+=i;
        }   
    }
    return prime;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<int> prime=isprime();
    while(t--){
        int d;
        cin>>d;
        int x=0,y=0;
        for(int i=2; i<1e5; i++){
            if(x==0){
                if(prime[i]==1 && i-1>=d){
                    x=i;
                }
            }
            else{
                if(prime[i]==1 && i-x>=d){
                    y=i;
                    break;
                }
            }
        }
        cout<<x*y<<endl;
    }
    return 0;
}