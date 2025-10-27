#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
using namespace std;
int countzero(string s){
    int c=0;
    for(auto i:s){
        if(i=='0')c++;
    }
    return c;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int zero=countzero(s);
        int one=s.size()-zero;
        if(zero==one){
            cout<<"0"<<endl;
        }
        else{
            int t=0;
            for(auto i:s){
                if(one>=0 && zero>=0){
                    if(i=='0'){
                        one--;
                    }
                    if(i=='1'){
                        zero--;
                    }
                    t++;
                }
                else{
                    break;
                }
                //cout<<one<<" "<<zero<<" "<<t<<endl;
            }
            t--;
            cout<<s.size()-t<<endl;
        }
    }
    return 0;
}