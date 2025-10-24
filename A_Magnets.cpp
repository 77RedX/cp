#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin>>n;
    int o=69;
    for(int i=1;i<=n;i++){
       int temp;
       cin>>temp;
       if(temp!=o)
       m++;
       o=temp;
    }
    cout<<m;
}