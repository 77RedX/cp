#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        vector<int> q(n);
        for(int i=0;i<n;i++) cin>>p[i];
        for(int i=0;i<n;i++) cin>>q[i];
        for(int i=0;i<n;i++){
            long long ri=0;
            for(int j=0;j<=i;j++){
                long long val=(1LL << p[j]) + (1LL << q[i - j]);
                ri=max(ri,val);
            }
            cout<<ri%998244353<<" ";
        }
        cout<<"\n";
    }
}
//fucking time limit