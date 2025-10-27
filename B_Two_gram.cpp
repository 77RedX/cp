#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    map<string,int> m;
    for(int i=0;i<n-1;i++){
        string tg=s.substr(i,2);
        // cout<<tg<<endl;akshay
        m[tg]++;
    }
    string tg;
    int max=0;
    for(auto& x:m){
        if(x.second>max){
            max=x.second;
            tg=x.first;
        }
    }
    cout<<tg;
}