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
        int n,k;
            cin>>n>>k;
            vi a(n);
            fn{
                cin>>a[i];
            }
            vi L; //saara blocks ka lengths
            int len=1;
            for(int i=1; i<n; i++){
                if(a[i]==a[i-1]){
                    len++;
                } 
                else{
                    L.push_back(len);
                    len=1;
                }
            }
            L.push_back(len);
            sort(L.begin(), L.end());
            int m=L.size();
            vi suff(m+1, 0);
            for(int i=m-1; i>=0; i--){
                suff[i]=suff[i+1]+L[i];
            }
            int ans=0;
            int i=0;
            while(i<m) {
                int b=L[i]; 
                int c=m-i;   
                int s=suff[i]; 
                int diff=k-s;
                if (diff%c==0) {
                    int x=diff/c;
                    if (x>=1-b){
                        ans++;
                    }
                }
                while(i<m && L[i]==b) {
                    i++;
                }
            }
            cout<<ans<<"\n";
        }
    return 0;
}