#include <bits/stdc++.h>
using namespace std;
int  main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    for(int i=0;i<m;i++) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int diff=a[n-1]-a[0];
    for(int i=0;i<=m-n;i++){
        if((a[i+n-1]-a[i])<diff) diff=a[i+n-1]-a[i];
    }
    cout<<diff;
}