#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<string,int> m;
    while(t--){
        string s;
        cin>>s;
        m[s]++;
    }
    string w;
    int mx=0;
    for( auto x:m){
        if(x.second>mx){
            mx=x.second;
            w=x.first;
        }
    }
    cout<<w;
}