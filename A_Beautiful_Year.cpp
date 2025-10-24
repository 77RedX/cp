#include <iostream>
using namespace std;
bool unique(int y){
    int a[4],i=1;
    while(y!=0){
        a[4-i]=y%10;
        y/=10;
        i++;
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]==a[j])
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    bool x=false;
    while(x==false){
        n++;
        x=unique(n);
    }
    cout<<n;
}