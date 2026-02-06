#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "1" << endl
#define cn cout << "0" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int alr=0;
        //logic: either 2026 found, then new year string, if not atleast 2025 is not found, then new year string. dont mod
        if(s.find("2026")!=string::npos){ //s.find() gives index or npos, if finding the existence, use this logic
            alr=1;
            cout<<"0"<<endl;
            continue;
        }
        if(s.find("2025")==string::npos){
            alr=1;
            cout<<"0"<<endl;
            continue;
        }
        //logic: if not already new year, remove a single 2025 from and replace 5 with 6, now condition 1 satisfied;
        if(!alr){  
            cout<<"1"<<endl;
            continue;
        }
    }
    return 0;
}