#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int face=0;
    while(n){
        string s;
        cin>>s;
        if(s=="Tetrahedron") face+=4;
        if(s=="Cube") face+=6;
        if(s=="Octahedron") face+=8;
        if(s=="Dodecahedron") face+=12;
        if(s=="Icosahedron") face+=20;
        n--;
    }
    cout<<face;
}