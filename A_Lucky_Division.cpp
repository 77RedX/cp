#include <bits/stdc++.h>// good question
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> lucky;
    for(int i=1;i<=n;i++){
        int c=i;
        while(c!=0){
            if(c%10==7 || c%10==4)
            c/=10;
            else break;
        }
        if(c==0){
            lucky.push_back(i);
        }
    }
    for(auto x:lucky){
        if(n%x==0){ 
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}