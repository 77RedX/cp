#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // cout<<n<<" ";
        long long x=0,p=3,s=3;
        while(x==0){
            if(n%s==0) x=n/s;
            // cout<<s<<" ";
            s+=1LL<<p-1;
            p++;
        }
        cout<<x<<endl;
    }
}