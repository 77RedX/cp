#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    unordered_set<char> a;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z')
        a.insert(s[i]);
    }
    cout<<a.size();
}