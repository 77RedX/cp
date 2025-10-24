#include <bits/stdc++.h>
using namespace std;
int apcheck(vector <int>& p){
    if((p[0]-p[1])==(p[1]-p[2])){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> a(3);
        for(int i=0;i<3;i++) cin>>a[i];
        if(apcheck(a)){
            cout<<"YES\n";
        }
        else if(count(a.begin(),a.end(),1)==2 && count(a.begin(),a.end(),2)==1){
            cout<<"NO\n";
        }
        else if(count(a.begin(),a.end(),1)<=2 && count(a.begin(),a.end(),1)>0){
            cout<<"YES\n";
        }
        else{
            
        }
    }
}