#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if((n*(n+1))/2<x){
            cout<<"NO\n";
        } 
        else if(k>=x){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}