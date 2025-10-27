#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m=1;
        cin>>n;
        vector<int> a;
        while(n!=0){
            int r;
            r=n%10;
            if(r!=0) a.push_back(r*m);
            m*=10;
            n/=10;
        }
        cout<<a.size()<<endl;
        for(auto x:a) cout<<x<<" ";
        cout<<endl;
    }
}
// question says we can print in any order, program has been accepted