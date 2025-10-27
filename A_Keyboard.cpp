#include <bits/stdc++.h>
using namespace std;
int main(){
    char p;
    string s;
    cin>>p>>s;
    string r1="qwertyuiopasdfghjkl;zxcvbnm,./";
    // cout<<s<<endl;
    if(p=='R'){
        for(int i=0;i<s.size();i++){
            char x=s[i];
            // cout<<x<<endl;
            cout<<r1[(find(r1.begin(),r1.end(),x)-r1.begin())-1];
        }
    }
    else if(p=='L'){
        for(auto& x:s){
            cout<<r1[(find(r1.begin(),r1.end(),x)-r1.begin())+1];
        }

    }
}