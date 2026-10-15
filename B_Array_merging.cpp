#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
void longest(vector<int> x, map<int,int> &mpp){
    x.push_back(-1);
    int n=x.size();
    int curr=1;
    mpp[x[0]]=1;
    for(int i=1; i<n; i++){
        if(x[i]!=x[i-1]){
            mpp[x[i-1]]=max(mpp[x[i-1]], curr);
            curr=0;
        }
        curr++;
    }
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n), b(n);
        map<int,int> amp, bmp;
        fn cin>>a[i];
        fn cin>>b[i];
        longest(a, amp);
        longest(b, bmp);
        int maxi=INT_MIN;
        for(auto i: amp){
            //cout<<i.first<<" "<<i.second;
            bmp[i.first]+=i.second;
        }
        for(auto i:bmp){
            maxi=max(i.second, maxi);
        }
        cout<<maxi<<endl;
    }
    return 0;
}