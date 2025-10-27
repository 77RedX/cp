#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s;
    cin>>s1>>s2>>s;
    vector<int> a(26,0);
    if(s1.size()+s2.size()!=s.size()){
        cout<<"NO";
        return 0;}
    for(int i=0;i<s1.size();i++){
        a[s1[i]-'A']++;
    }
    for(int i=0;i<s2.size();i++){
        a[s2[i]-'A']++;
    }
    for(int i=0;i<26;i++){
        int cnt=count(s.begin(),s.end(),char('A'+i));
        if(cnt!=a[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}