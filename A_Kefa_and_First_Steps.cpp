#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0,mc=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(i>0 && x[i]>=x[i-1]){
            count ++;
            if(count>mc){
                mc=count;
            }
        }
        else count=0;
    }
    cout<<mc+1;
}