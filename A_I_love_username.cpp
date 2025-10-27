#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max,min,amaz=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i==0){
          min=x;
          max=x;  
        } 
        if(i!=0){
            if(x<min) min=x,amaz++;
            else if(x>max) max=x,amaz++;
        }
    } 
    cout<<amaz; 
}