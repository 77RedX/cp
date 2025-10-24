#include <iostream>
using namespace std;
int main(){
    string m,c;
    cin>>m>>c;
    string x;
    for(int i=0;i<m.size();i++){
        if(m[i]==c[i]){
            x+='0';
        }
        else{
            x+='1';
        }
    }
    cout<<x;
}