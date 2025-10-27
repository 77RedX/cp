#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int t=0;
    while(s.substr(t,2)=="01" || s.substr(t,2)=="10" || t<n-1){
        if(s.substr(t,2)=="01" || s.substr(t,2)=="10"){
            s.erase(t,2);
            if(t>0){
                t--;
                continue;
            }
        }
        t++;
    }
}