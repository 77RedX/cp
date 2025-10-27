#include <bits/stdc++.h>
using namespace std;
int issorted(vector<int> a,int n){
    for(int i=0;i<n;i++){
        if(i+1<n){
            if(a[i]<=a[i+1]) continue;
            else return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(k>=2){
            cout<<"YES\n";
        }
        else if(issorted(a,n)){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}