#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int max=a[0];
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]>max){
                max=a[i+1]-a[i];
            }
        }
        if((2*(x-a[n-1]))>max){
                max=(2*(x-a[n-1]));
            }
        cout<<max<<endl;
    }
}