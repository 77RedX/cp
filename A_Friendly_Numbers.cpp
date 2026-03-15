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
        if(n%9) cout<<"0\n";
        else{
            int i;
            for(i=1;i<90;i++){
                int check=n+i;
                int copy=check;
                int sum=0;
                while(check){
                    sum+=check%10;
                    check/=10;
                }
                if((copy-sum)==n){
                    break;
                }
            }
            if(i==90){
                cout<<"0\n";
            }
            else cout<<"10\n";
        }
    }   
    return 0;
}