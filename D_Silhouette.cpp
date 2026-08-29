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
        vector<int> b(n);
        fn cin>>b[i];
        vector<int> sortb=b;
        sort(sortb.begin(), sortb.end());   
        vector<int> uniqb;
        vector<int> cnt;
        for(auto i: sortb){
            if(uniqb.empty() || uniqb.back()!=i){
                uniqb.push_back(i);
                cnt.push_back(1);
            }
            else{
                cnt.back()++; //follows the order of uniqb
            }
        }
        if(uniqb[0]!=0){ //cant happen because the smallest shadow has to be 0
            cout<<"-1\n";
            continue;
        }
        vector<int> uniqa(uniqb.size());
        int flag=0;
        for(int i=0; i<uniqb.size()-1; i++){
            int diff=uniqb[i+1]-uniqb[i];
            if(diff%cnt[i]){
                flag=1;
                break;
            }
            uniqa[i]=diff/cnt[i];
            if(i>0 && uniqa[i]<=uniqa[i-1]){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"-1\n";
            continue;
        }
        if(uniqb.size()==1){
            uniqa[0]=1;
        }
        else{
            uniqa.back()=uniqa[uniqa.size()-2]+1;
        }
        for(int i=0; i<n; i++){
            int idx=lower_bound(uniqb.begin(), uniqb.end(), b[i])- uniqb.begin();
            cout<<uniqa[idx]<<" ";
        }
        cout<<endl;
    }
    return 0;
}