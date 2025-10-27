#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int less=a>b?b:a;
    cout<<less<<" ";
    int rem=max(a,b)-less;
    cout<<rem/2;
}