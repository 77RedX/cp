#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int c=1;
    while(k*c%10!=0){
        if((k*c%10)==r)break;
        c++;
    }
    cout<<c;
}