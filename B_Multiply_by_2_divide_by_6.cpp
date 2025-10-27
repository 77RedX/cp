#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int three=0,two=0;
        while(n%3==0){
            n/=3;
            three++;
        }
        // cout<<n<<endl;
        while(n%2==0){
            n/=2;
            two++;
        }
        // cout<<n<<endl;
        if(n!=1){
            cout<<"-1\n";
        }
        else{
            if(three>two){
                cout<<(2*three)-two<<endl;
            }
            else if(two>three){
                cout<<"-1\n";
            }
            else{
                cout<<three<<endl;
            }
        }
    }
}