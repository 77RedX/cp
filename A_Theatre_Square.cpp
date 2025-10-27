#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long x=n%a;
    if(x!=0)n+=a-x;
    long long y=m%a;
    if(y!=0)m+=a-y;
    cout<<(n*m)/(a*a);
}