#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
            vector<int> a(n);
            for(int i=0;i<n;i++) cin>>a[i];
            auto it1=find(a.begin(),a.end(),1);
            auto it2=find(a.rbegin(),a.rend(),1);
            int i1=(it1-a.begin());
            int i2=(a.size()-1-(it2-a.rbegin()));
            // cout<<i1<<" "<<i2<<endl;
            if(i2-i1+1<=x){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
    }
}