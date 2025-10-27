#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    int co=0;
    for(const auto& k:a){
        for(const auto& l:a){
            if(k.first==l.second){
                co++;
            }
        }
    }
    cout<<co;
}