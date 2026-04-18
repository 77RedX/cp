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
        vi a(n);
        unordered_map<int,int> m;
        int maxi=0;
        int ele;
        fn{
            cin>>a[i];
            m[a[i]]++;
            if(m[a[i]]>maxi){
                maxi=m[a[i]];
                ele=a[i];
            }
        }
        int cnt=m[ele]; // count of max elements
        int rest=n-cnt; //count of elements to replace
        int ans=0;
        while(cnt<n){
            ans++; //clone
            ans=ans+min(cnt,rest);
            rest-=cnt;
            cnt*=2;
            //cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }   
    return 0;
}