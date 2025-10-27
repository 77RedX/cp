/*#include <bits/stdc++.h> wrong code i guess cant help this
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int x=n,s=0,t=0;
    while(((x-s)/m)>0){
        s=x;
        x+=((x-t)/m);
        t=s;
    }
    if(x%m==0) x++;
    cout<<x;
}*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int socks=n,day=0;
    while(socks>0){
        socks--;
        day++;
        if(day%m==0) socks++;
    }
        cout<<day;
}
