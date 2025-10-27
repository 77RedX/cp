#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,c=0;
    cin>>n;
    int cops=0,crims=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>0)cops+=x;
        else crims+=abs(x);
        if(cops-crims<0){
            c++;
            cops=0; crims=0;
        }  
       }
    cout<<c;
}