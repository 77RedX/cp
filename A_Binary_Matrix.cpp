#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        int n,m; cin>>n>>m;
        int a[n][m];
        vector<int> c;
        vector<int> r;
        int ct=0;
        int i,j,k=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]==1){
                    c.push_back(j);
                    r.push_back(i);
                    k++;
                }   
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(count(c.begin(),c.end(),j)%2!=0){
                    for(int k=0;;)
                }
            }
        }
        cout<<ct<<endl;
        t--;
    }
}