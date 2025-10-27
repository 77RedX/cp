#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> a;
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
            a.push_back({b[i],i});
        }
        sort(a.begin(),a.end(),greater<pair<int,int>>());
        int multiplier=1;
        int mid=(n+1)/2;
        // cout<<mid<<" "<<endl;
        //time calc ez
        int time =0;
        for(int i=0;i<n;i++){
            time+=(2*(a[i].first*multiplier));
            if(i%2!=0) multiplier++;
            // cout<<multiplier<<endl;
        }
        cout<<time<<endl;
        //wtf is pos
        int pos=1;
        cout<<mid<<" ";
        int i=0;
        for(auto x:a){
            int it1=x.second; 
            if(i%2==0) b[it1]=mid+pos;
            else {
                b[it1]=mid-pos;
                pos++;
            }
            i++;
        }
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}