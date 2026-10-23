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
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mpp[a[i]]++;
        }   
        int ans=0;
        int flag=0;
        for(auto i: mpp){
            if(i.second%k==0){
                mpp[i.first]=i.second/k;
            }
            else{
                flag++;
                break;
            }
        }
        //cout<<t<<endl;
        if(flag){
            cout<<ans<<endl;
            continue;
        }
        //a.push_back(-1); //ending range
        int l=0, r=0;
        while(r<n){
            mpp[a[r]]--;
            //cout<<mpp[a[r]]<<" "<<endl;   
            
            while(mpp[a[r]]<0){
                //cout<<l<<" "<<r<<" :";
                mpp[a[l]]++;
                l++;
                //cout<<l<<" "<<r<<endl;
            }
            //cout<<l<<" "<<r<<endl;
            ans+=r-l+1;
            //cout<<ans<<endl;
            r++;
        }
        
        cout<<ans<<endl;
    }
    return 0;
}