#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        if(n>k && k>1){
                s+='1';
                for(int i=0;i<n-k-1;i++){
                    s+='0';
                }
                for(int i=0;i<k-1;i++){
                    s+='1';
                }
                s+='0';
                cout<<s<<endl;
        }
        else{
            for(int i=0;i<k;i++)s+='1';
            for(int i=0;i<n-k;i++)s+='0';
            cout<<s<<endl;
        }
    }
}