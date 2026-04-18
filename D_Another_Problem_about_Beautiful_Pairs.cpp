#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
int expsq(int n){
    if(n<2) return n;
    int low=1, high=n, ans=0;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(mid<=n/mid){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //n(root(n)) solution?
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n+1);
        fn cin>>a[i+1];
        int cnt=0;
        int rootn=expsq(n);
        for(int e=1;e<=rootn;e++){
            for(int j=1;j<=n;j++){
                int i=j-e*a[j];
                if(i>=1 && a[i]==e) cnt++;
            }
        }
        for(int e=1;e<=rootn;e++){
            for(int i=1;i<=n;i++){
                if(a[i]>rootn){  
                    int j=e*a[i]+i;
                    if(j<=n && a[j]==e) cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}