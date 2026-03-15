#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans=INT_MAX;
        int maxi=a[n-1];
        int idx=n;
        for(int i=0;i<n-1;i++){
            int x=a[i];
            while(maxi>=x){
                cout<<x<<" ";
                if((maxi-x)<ans){
                    ans=maxi-x;
                    idx=i;
                }
                x*=2;
            }
            cout<<endl;
        }
        cout<<ans<<endl;
    }
}
