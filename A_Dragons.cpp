#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>s>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end());
    for(auto &x:a){
        if(x.first>=s){
            cout<<"NO";
            return 0;
        }
        else{
            s+=x.second;
        }
    }
    cout<<"YES";
}