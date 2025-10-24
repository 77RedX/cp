#include <bits/stdc++.h>
using namespace std;
int pcheck(int x,int y){
    if((x%2)==(y%2)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(pcheck(max(a,b),n)){
            if(pcheck(a,b)){
                
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
}