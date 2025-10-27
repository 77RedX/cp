#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int g,f;
        g=min(a,c);
        f=min(b,d);
        if(g==f||g>f){
            cout<<"Gellyfish\n";
        }
        else{
            cout<<"Flower\n";
        }
    }
}