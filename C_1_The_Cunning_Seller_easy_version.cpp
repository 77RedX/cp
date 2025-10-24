#include <bits/stdc++.h>
using namespace std;
long long power(int x,int y){
    int t=1;
    for(int i=0;i<y;i++){
        t*=x;
    }
    return t;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=1;
        int p=0;
        long long cost=0;
        while(n!=0){
            if((x*3)>n){
                cost+=power(3,p+1)+(p*power(3,p-1));
                n-=x;
                x=1;
                p=0;
            }
            else if((x*3)==n){
                n-=x*3;
                p++;
                cost+=power(3,p+1)+(p*power(3,p-1));
            }
            else{
                x*=3;
                p++;
            }
        }
        cout<<cost<<endl;
    }
}