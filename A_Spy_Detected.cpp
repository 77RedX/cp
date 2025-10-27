#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> x;
        vector<int> a;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            a.push_back(m);
            x.insert(m);
        }
        for(int l:x){
            if(count(a.begin(),a.end(),l)==1){
            auto b=find(a.begin(),a.end(),l);;
            cout<<b-a.begin()+1<<endl;
            break;
            }
        }       
    }
}