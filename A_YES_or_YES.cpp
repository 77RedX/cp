#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c=0;
    while(t--){
        string s;
        cin>>s;
        for(auto& x:s){//transform(s.begin(), s.end(), s.begin(), ::tolower); can also be used
            x=tolower(x);
        }
        if(s=="yes") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}