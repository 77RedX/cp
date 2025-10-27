#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(auto& a:s){
        a=tolower(a);
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o'&& s[i]!='u' && s[i]!='y'){ //if (string("aeiouy").find(c) == string::npos)
            cout<<"."<<s[i];
        }
    }
}