#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> a(n);
        int flag=0;
        for(int i=0;i<n;i++){ 
            cin>>a[i].first>>a[i].second;
            if(a[i].second>=0){
                cout<<"1\n";
                flag++;
                break;
            }
        }
        if(flag==0){
            
        }
    }
}