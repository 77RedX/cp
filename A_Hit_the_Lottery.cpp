#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    while(n>=100){
        n-=100;
        c++;
    }
    while(n>=20){
        n-=20;
        c++;
    }
    while(n>=10){
        n-=10;
        c++;
    }
    while(n>=5){
        n-=5;
        c++;
    }
    while(n>0){
        n-=1;
        c++;
    }
    cout<<c;
}
/* int main(){
    int n;
    cin>>n;
    int c=0;
    int r[]={100,20,10,5,1};
    for(int d:r){
    c+=n/d;
    n%=d;
    }
    cout<<c;
    Much Cleaner approach
}*/