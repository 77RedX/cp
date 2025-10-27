#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,sum=0;
    cin>>n>>k;
    int i;
    for(i=1;i<=n;i++){
        sum+=(5*i);
        if(sum+k>240){
            break;
        }
    }
    cout<<i-1;
}