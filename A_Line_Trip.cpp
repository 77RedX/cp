#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        int max=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i=0){
                max=a[i];
            }
            if(i>0){
                max=(max>a[i]-a[i-1])?max:a[i]-a[i-1];
            }
        }
        max=(max>2*(x-a[n-1]))?max:2*(x-a[n-1]);
        cout<<max<<endl;
   }
}