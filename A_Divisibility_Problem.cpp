#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        int c=0;
        cin>>a>>b;
        int r=a%b;
        c=(r==0)?0:(b-r);
        cout<<c<<endl;
    }
}