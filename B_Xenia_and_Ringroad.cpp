#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    for(int i=0;i<m;i++) cin>>a[i];
    long long t=a[0]-1;
    // cout<<t<<endl;
    for(int i=0;i<m-1;i++){
        if(a[i]>a[i+1]){
            t+=(n-a[i])+a[i+1];
        }
        else{
            t+=a[i+1]-a[i];
        }
        // cout<<t<<endl;
    }
    cout<<t;
}