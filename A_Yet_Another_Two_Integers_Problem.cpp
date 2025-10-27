#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x=abs(a-b)%10;
        int c=x==0?abs(a-b)/10:(abs(a-b)/10+1);
        cout<<c<<"\n";
    }
}