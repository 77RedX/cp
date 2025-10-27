#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string out;
    for(int i=0;i<s.size();){
        if(s[i]=='.'){
            i+=1;
            out+='0';
        }
        else if(i+1<s.size() && s[i]=='-' && s[i+1]=='.'){
           out+='1';
           i+=2; 
        }
        else if(i+1<s.size() && s[i]=='-' && s[i+1]=='-'){
            out+='2';
            i+=2;
        }
    }
    cout<<out;
}