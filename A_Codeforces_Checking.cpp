#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s="codeforces";
    while(t--){
        char c;
        cin>>c;
        size_t it=s.find(c);
        if(it!=string::npos){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}