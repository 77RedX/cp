#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int m;
        cin>>m;
        string b;
        cin>>b;
        string order;
        cin>>order;
        int i=0;
        for(auto x:order){
            if(x=='D'){
                a+=b[i];
                i++;
            }
            else if(x=='V'){
                a=b[i]+a;
                i++;
            }
        }
        cout<<a<<endl;
    }
}