#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=INT_MAX;
        while(n!=0){
            m=min(m,n%10);
            n/=10;
        }
        cout<<m<<endl;
    }
}