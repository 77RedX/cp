#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int cops=0,crimes=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>0){
            cops+=x;
        }
        else{
            if(cops>0){
                cops--;
            }
            else{
                crimes++;
            }
        }
    }
    cout<<crimes;
}