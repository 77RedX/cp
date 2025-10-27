#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int count=n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end(),greater<int>());
        for(int i=n-1;i>0;i--){
            if(a[i-1]-a[i]<=1) count--;
        }
        if(count==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}