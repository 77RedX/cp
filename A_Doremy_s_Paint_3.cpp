#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        map<int,int> b;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        if(b.size()==2){
            int sum=0;
            for(auto &x:b){
                if(sum==0) sum-=x.second;
                else sum+=x.second;
            }
            if(abs(sum)<=1) cout<<"Yes\n";
            else cout<<"No\n";
        }
        else if(b.size()==1){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}