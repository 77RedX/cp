#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> a;
        for(int i=1;i<=n;i++) a.push_back(i);
        for(int i=n-2;i>=0;i--){
            if(s[i]=='<'){
                for(int j=i;j>=0;j--){
                    if(a[j]<a[i+1]) swap(a[j],a[i+1]);
                }
            }
            else if(s[i]=='>'){
                for(int j=i;j>=0;j--){
                    if(a[j]>a[i+1]) swap(a[j],a[i+1]);
                }
            }
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}