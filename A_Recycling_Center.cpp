#include <bits/stdc++.h>
using namespace std;
void doub(vector<int>& a,int i){
    cout<<"work\n";
    for(int j=i;j<a.size();j++){
        a[j]*=2;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end(),greater<int>());
        for(int i=0;i<a.size();i++){
            if(a[i]>c){
                continue;
            }
            else{
                if(i>0) a.erase(a.begin()+(i-1));
                else a.erase(a.begin());
                doub(a,i);
                i--;
            }
        }
        cout<<a.size()<<endl;
    }
}