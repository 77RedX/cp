#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string t;
    cin>>n>>t;
    string sol="";
    //ez koshan?
    if(t=="10"){
        if(n==1){
            cout<<-1<<endl;
            return 0;
        }
        for(int i=0;i<n-1;i++){
            sol+="1";
        }
        sol+="0";
    }
    else{
        for(int i=0;i<n;i++){
            sol+=t;
        }
    }
    cout<<sol;
    return 0;
}