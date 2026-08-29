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
        int n;
        string s;
        cin>>n>>s;
        int co=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1') co++;
        }
        int cz=n-co;
        //cout<<cz<<" "<<co<<endl;
        if(abs(cz-co)>2){ // 100% fail
            cout<<"-1\n";
        }
        else{
            int ones=0;
            int zeros=0;
            for(int i=0; i<n; i++){
                if(i==0 || s[i]!=s[i-1]){
                    if(s[i]=='0') zeros++;
                    else ones++;
                }
            }
            int diff=cz-co;
            int minm=max(-1LL, diff-1);
            int maxm=min(1LL, diff+1);
            int maxi=-1; //remaining length
            for(int i=minm; i<=maxm; i++){
                int rem1=min(ones, zeros-i);
                int rem0=rem1+i;
                if(rem1>=0 && rem0>=0 && rem1<=ones && rem0<=zeros){
                    maxi=max(maxi, rem1+rem0);
                }
            }
            cout<<n-maxi<<endl;
            //cout<<ones<<" "<<zeros<<endl;
        }
    }
    return 0;
}