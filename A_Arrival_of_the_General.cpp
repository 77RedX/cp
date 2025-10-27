#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mini=0,maxi=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=a[mini]) mini=i;
        if(a[i]>a[maxi]) maxi=i;
    }
    // cout<<mini<<endl;
    // cout<<maxi<<endl;
    if(mini<maxi) cout<<(n-mini)+(maxi-1)-1;
    else cout<<(n-mini)+(maxi-1);
}