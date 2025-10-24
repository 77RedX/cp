#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    map<int,int> a;
    for(int i=0;i<3;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    for(auto x:a){
        if(x.second==1){
            cout<<x.first<<endl;
        }
    }
}
}