#include <bits/stdc++.h>// isupper and islower are more optimized functions, use them
using namespace std;
int main(){
    string s;
    cin>>s;
    string copy;
    copy=s;
    for(int i=1;i<s.size();i++){
        if(isupper(s[i])){
            s[i]=tolower(s[i]);
        } 
        else if(islower(s[i])){
            cout<<copy;
            return 0;
        }
    }
    if(islower(s[0])){
         s[0]=toupper(s[0]);
        cout<<s;
    }
    else{
        s[0]=tolower(s[0]);
        cout<<s;
    }
}