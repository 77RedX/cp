#include <bits/stdc++.h>// fuck this
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int min=INT_MAX;
        int max=0;
        map<int,int> m;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
            a.push_back(x);
        }
        int minkey;
        int maxkey;
        for(auto& x:m){
            if(x.second<min){
                minkey=x.first;
            }
            if(x.second>max){
                maxkey=x.first;
            }
        }
        auto it=find(a.rbegin(),a.rend(),minkey);
        int index=a.size()-1-(it-a.rbegin());
        for(int i=0;i<index;i++){
            
        }
    }
}