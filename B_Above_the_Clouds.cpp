#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> x;
        for(int i=0;i<n;i++){
            x[s[i]]++;
        }
        int odd=0;
        for(auto& i:x){
            if(i.second%2!=0 && i.second>1){
                cout<<"Yes\n";
                odd++;
                break;    
            }
        }
        int even=0;
        if(odd==0){
            for(auto& i:x){
                if(i.second%2==0){
                    even++;
                    if(even>1){
                        cout<<"Yes\n";
                        break;
                    }
                }
            }
            if(even<2){
                int target=n%2==0?(n/2)-1:n/2;
                string x=s.substr(0,target);
                string y=s.substr(target+1,n-target);
                string z=x+y;
                
            }
        }
    }
}