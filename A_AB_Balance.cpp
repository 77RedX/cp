#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ab=0;
        int ba=0;
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]=='a' && s[i+1]=='b'){
                ab++;
            }
            if(s[i]=='b' && s[i+1]=='a'){
                ba++;
            }
        }
        //diff bw ab and ba cannot be greater than 1
        if(s[0]==s[n-1]){
            cout<<s<<endl;
        }
        else{
            if(ab>ba){
                if(s[0]=='a') s[0]='b';
                else s[n-1]='a';
            }
            else{
                if(s[0]=='b') s[0]='a';
                else s[n-1]='b';
            }
            cout<<s<<endl;
        }
    }
    return 0;
}