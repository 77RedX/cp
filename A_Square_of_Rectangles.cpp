#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> l,b;
        int m=0,area=0;
        for(int i=0;i<3;i++){
            int x,y;
            cin>>x>>y;
            l.push_back(x);
            b.push_back(y);
            m=max({m,x,y});
            area+=x*y;
        }
        if(area==m*m){
            sort(l.begin(),l.end());
            sort(b.begin(),b.end());
            
        }
        else cout<<"NO\n";
    }
}