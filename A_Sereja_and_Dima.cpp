#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0,d=0,t=0;
    auto it1=a.begin();
    auto it2=a.end()-1;
    while(it1<=it2){
        if(t%2==0){
            s+=(*it1>*it2)?*(it1++):*(it2--);
        }
        else{
            d+=(*it1>*it2)?*(it1++):*(it2--);
        }
        t++;
    }
    cout<<s<<" "<<d;
}