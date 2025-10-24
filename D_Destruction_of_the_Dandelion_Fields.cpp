#include <bits/stdc++.h>
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
        vector<int> odd;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2){
                odd.push_back(x);
            }
            else{
                sum+=x;
            }
        }
        //cout<<sum<<endl;
        sort(odd.begin(),odd.end(),greater<int>());
        double x=odd.size();
        if(x==0) cout<<"0\n";
        else {
            //cout<<x<<endl;
            for(int i=0;i<ceil(x/2);i++){
                //cout<<sum<<endl;
                sum+=odd[i];
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}