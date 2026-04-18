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
        //4 wheel or 6 wheel
        if(n>=4 && (n%4==0 ||  n%4==2)){
            int mini=n/6;
            int maxi=n/4;
            if(n%6){
                mini+=1;
                //suppose n=20, 2-6 and 2-4 calulated 3-6 and 1-4 but whatever
            }
            if(mini==0) maxi=mini;
            cout<<mini<<" "<<maxi<<endl;
        }
        else{
            cout<<"-1\n";
        }
    }
    return 0;
}