#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>0){
        cout<<n;
    }
    else{
        n=abs(n);
        int last=n%10;
        int last2=(n/10)%10;
        if(last>=last2){
            int res=(n/10);
            if(res==0) cout<<res;
            else cout<<-res;
        }
        else{
            int res=((n/100)*10)+last;
            if(res==0) cout<<res;
            else cout<<-res;
        }
    }
}