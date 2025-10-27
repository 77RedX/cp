#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string s;
    if(n==1 && t==10){
        cout<<"-1";
        return 0;
    }
    else if(n==1 && t<10){
        cout<<t;
        return 0;
    }
    for(int i=0;i<=n-1;i++){ // gendu logic
        if(i==0 && n>=3){
            s+='1';
        }
        else if(i==n-2 || n==2){
            if(t==2 || t==4 || t==8 || t==6){
                s+="24";
                break;
            }
            else if(t==3 || t==9) {
                s+="18";
                break;
            }
            else{
                s+="35";
                break;
            }
        }
        else{
            s+='0';
        }
    }
    cout<<s;
}