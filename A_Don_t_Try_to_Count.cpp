#include <bits/stdc++.h>
using namespace std;
int finder(string x,string s){
    if(x.find(s)!=string::npos) return 1;
    else return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int flag=0;
        int counter=0;
        while(true){
            //cout<<x<<endl;
            if(x.size()>=m && finder(x,s)){
                flag=1;
                break;
            }
            counter++;
            x+=x;
            if(x.size()>2*m){
                if(finder(x,s)) flag=1;
                break;
            }
        }
        if(flag) cout<<counter<<endl;
        else cout<<"-1\n";
    }
}