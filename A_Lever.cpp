#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        int it=0;
        while(1){
            int c=0;
            for(int i=0;i<n;i++){
                if(a[i]>b[i]){
                    a[i]-=1;
                    c++;
                    break;
                }
            }
            it++;
            if(c==0) break;
        }
        cout<<it<<endl;
    }
}