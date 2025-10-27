#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string out;
    int x=0;
    for(int i=0;i<s.size();){
        if(i+2<s.size() && s.substr(i,3)=="WUB"){
            i+=3;
            if(x){ 
                x=0;
                out+=' ';
            } 
        }
        else{
            x=1;
            out+=s[i];
            i++;
        }
    }
    if(!out.empty() && out.back()==' '){
        out.pop_back();
    }
    cout<<out;
}