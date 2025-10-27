#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int zero=0,one=0;
        for(char x:s){
            if(x=='0')zero++;
            else if(x=='1')one++;
        }
        // cout<<one<<" "<<zero<<endl;
        int zeropair,onepair;
        zeropair=zero/2;
        onepair=one/2;
        int minpair=(max(zero,one)-min(zero,one))/2;
        // cout<<onepair<<" "<<zeropair<<endl;
        int maxpair=onepair+zeropair;
        if(k>maxpair){
            cout<<"NO\n";
        }
        else if(k<minpair){
            // cout<<minpair;
            cout<<"NO\n";
        }
        else if((k-minpair)%2!=0){
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
}