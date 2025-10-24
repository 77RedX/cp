#include<iostream>
using namespace std;
int main(){
    int n,t,g=51;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
            if(s[i]=='G' && i-t<0){
                s[0]='G';
                s[i]='B';
            }
            else if(s[i]=='G' && i-t>=0){
                s[i]='B';
                s[i-t]='G';
            }
    }
    cout<<s;
}