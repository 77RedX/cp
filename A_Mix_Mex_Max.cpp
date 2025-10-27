#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> m;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        if(m.size()<=2 && m.count(-1)==1 && m.count(0)==0){
            cout<<"YES\n";
        }
        else if(m.size()==1 && m.count(0)==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}