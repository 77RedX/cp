#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=n-1;i>=0;i--)
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        // we win these
        string s;
        cin>>s;
        int n=s.size();
        int mindist=INT_MAX;
        int l1=n;
        int r1=n;
        fn{// checking 00 or 50
            if(s[i]=='0' && l1==n){
                l1=i;
                continue;
            }
            if((s[i]=='0' || s[i]=='5') && l1<n && r1==n){
                r1=i;
                int dist1=n-1-l1;
                int dist2=l1-1-r1;
                //cout<<r1<<" "<<l1<<endl;
                int dist=dist1+dist2;
                mindist=min(mindist,dist);
                break;
            }
        }
        int l2=n;
        int r2=n;
        fn{// checking 25 or 75
            if(s[i]=='5' && l2==n){
                l2=i;
                continue;
            }
            if((s[i]=='2' || s[i]=='7') && l2<n && r2==n){
                r2=i;
                int dist1=n-1-l2;
                int dist2=l2-1-r2;
                int dist=dist1+dist2;
                mindist=min(mindist,dist);
                break;
            }
        }
        cout<<mindist<<endl;
    }   
    return 0;
}