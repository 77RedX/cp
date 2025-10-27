#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
    map<int,int> a;
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    int s=0;
    for(auto m:a){
        s+=m.second-1;
    }
    cout<<s;
}