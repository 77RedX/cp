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
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    if(sum<m){
        cout<<"-1\n";
        return 0;
    }
    int low=1;
    int high=n;
    while(low<=high){
        int mid=(high-low)/2+low;
        //cout<<"possible at : "<<mid<<endl;
        int penalty=0;
        int x=mid; //days
        int maxi=0;
        for(int i=0; i<n; i++){
            if(x==0){
                x=mid;
                penalty++;
            }
            maxi+=max(0LL, (a[i]-penalty));
            x--;
        }
        if(maxi>=m){
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<low<<endl;
    return 0;
}