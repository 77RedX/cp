#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        int ex,wai,jed;
        cin>>ex>>wai>>jed;
        x+=ex;
        y+=wai;
        z+=jed;
    }
    if(x==0 && y==0 && z==0){
        cout<<"YES";
    }
    else cout<<"NO";
}