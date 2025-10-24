#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        int odd=0,even=0;
        for(auto x:freq){
            if (x.second%2!=0) odd+=(x.second);
        }
        cout<<even<<endl<<odd<<endl;
        if((n-k)%2==0){
            if(odd>0){
                if(k==odd) cout<<"YES1\n";
                else if((k>odd &&  k-odd%2)==0) cout<<"YES2\n";
                else cout<<"NO3\n";
            }
        }
        else if((n-k)%2!=0){
            if((odd-k)==1) cout<<"YES4\n";
            else cout<<"NO5\n";
        }
    }
}