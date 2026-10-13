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
        cin>>n;
        vector<int> a(n);
        map<int,int> mpp;
        for(int i=0; i<n; i++){
            cin>>a[i];
            mpp[a[i]]++;
        }
        int flag=0;
        for(auto i: mpp){
            if(i.second<2){
                flag=1;
                break;
            }
        }
        if(n==1 || flag){
            cout<<"-1\n";
            continue;
        }
        int l=0, r=1;
        vector<int> ans;
        while(r<n){
            if(r>0 && a[r-1]!=a[r]){
                //l to r-1 are same
                ans.push_back(r);
                l++;
                while(l<r){
                    ans.push_back(l);
                    l++;
                }
            }
            r++;
        }
        ans.push_back(r);
        l++;
        while(l<r){
            ans.push_back(l);
            l++;
        }
        for(auto i: ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }    
    return 0;
}