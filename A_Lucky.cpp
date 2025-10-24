#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int sum1=0,sum2=0;
        for(int i=0;i<3;i++){
            sum1+=n[i]-'0';
            sum2+=n[5-i]-'0';
        }
        if(sum1==sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}