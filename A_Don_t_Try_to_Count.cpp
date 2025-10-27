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
        int count=0;
        if(finder(x,s)){
            cout<<count<<endl;
            continue;
        }
        else{
            do{
                x+=x;
                count++;
            }while(x.size()<=s.size());
        }
        if(finder(x,s)){
            cout<<count<<endl;   
        }
        else{
            x+=x;
            count++;
            if(finder(x,s)) cout<<count<<endl;
            else cout<<"-1\n";
            }
        }
}