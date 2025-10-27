#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,j,k;
        cin>>n>>j>>k;
        vector<int> a(n);
        set<int> myset;
        for(int i=0;i<n;i++){
            cin>>a[i];
            myset.insert(a[i]);
        }
        int duplicate=a.size()-myset.size(); 
        int s=a[j-1];
        // cout<<s<<endl;
        sort(a.begin(),a.end());
        auto it=myset.begin();
        advance(it,(n-k)-duplicate);
        // cout<<*it1<<endl;
        int c=count(it,myset.end(),s);
        if(c==0) cout<<"NO\n";
        else cout<<"YES\n";
    }
}