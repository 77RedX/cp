#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int h=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='h' && h==0){
            h++;
        }
        else if(s[i]=='e' && h==1){
            h++;
        }
        else if(s[i]=='l'&& h==2){
            h++;
        }
        else if(s[i]=='l' && h==3){
            h++;
        }
        else if(s[i]=='o'&& h==4){
            h++;
            break;
        }
    }
    if(h==5) cout<<"YES";
    else cout<<"NO";
}