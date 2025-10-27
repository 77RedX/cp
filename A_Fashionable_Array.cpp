#include <bits/stdc++.h> // absolute cinema
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        auto it1=a.begin();
        auto it2=a.end()-1;
        int op=0;
        while(it1<=it2){
            if((*it1+*it2)%2==0){
                cout<<op<<endl;
                break;
            }
            else if((it1+1)<a.end() && (*(it1+1)+*it2)%2==0){
                op++;
                cout<<op<<endl;
                break;
            }
            else if(it2-1>=a.begin() && (*it1+*(it2-1))%2==0){
                op++;
                cout<<op<<endl;
                break;
            }
            else{
                op++;
                it1++;
                it2--;
            }
        }
    }
}