#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int peak=0,counter=0;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            // cout<<counter<<endl;
            if(a[i]==0){
                counter++;
                if(counter==k){
                    peak++;
                    i++;
                    counter=0;
                }
            }
            else{
                counter=0;
            }
        }
        cout<<peak<<endl;
    }
}