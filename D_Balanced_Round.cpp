#include <bits/stdc++.h>
using namespace std;
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
        sort(a.begin(),a.end());
        int count=0,max=0;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<=k){
                count++;
                if(count>max){
                    max=count;
                }
            }
            else{
                count=0;
            }
        }
        cout<<n-(max+1)<<endl;
    }
}