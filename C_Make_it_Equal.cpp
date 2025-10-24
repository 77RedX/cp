#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> s(n);
        vector<int> t(n);
        for(int i=0;i<n;i++) cin>>s[i];
        for(int i=0;i<n;i++) cin>>t[i];
        bool possible=true;
        for(int i=0;i<n;i++){
            if(s[i]==t[i]){
                continue;
            }
            else if(s[i]+k==t[i] || abs(s[i]-k)==t[i]){
                continue;
            }
            else{
                cout<<"NO\n";
                possible=false;
                break;   
            }
        }
        if(possible){
            cout<<"YES\n";
        }
    }
}