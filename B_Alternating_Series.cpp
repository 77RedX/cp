#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<3){
            for(int i=0;i<n;i++){
                if(i%2==0) cout<<"-1 ";
                else cout<<"2 ";
            }
        }
        if(n>=3){
            for(int i=0;i<n;i++){
                if(i%2==0) cout<<"-1 ";
                else if(n%2==0 && i==n-1) cout<<"2";
                else cout<<"3 ";
            }
        }
        cout<<endl;
    }
}