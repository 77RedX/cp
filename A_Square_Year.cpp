#include <bits/stdc++.h>
using namespace std;
int stringtonumber(string s){
    int n=0;
        for(int i=4;i>0;i--){
            int digit=s[4-i]-'0';
            n=n*10+digit;
        }
        return n;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=stringtonumber(s);
        int x=sqrt(n);
        if(x*x!=n){
            cout<<"-1\n";
        }
        else{
            cout<<"0"<<" "<<x<<endl;
        }
    }
}