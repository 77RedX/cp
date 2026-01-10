#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
using namespace std;
//sliding window approach
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> c(n);
    for(int i =0;i<n;i++){
        cin>>c[i];
    }
    vector<int> d(n);
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    int k;
    cin>>k;
    int maxsum=0;
    int start=0;
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=0;j<k;j++){
            sum+=c[i+j];
        }
        if(sum>maxsum){
            maxsum=sum;
            start=i;
            //cout<<i<<" "<<maxsum<<endl;
        }
    }
    for(int i=start;i<start+k;i++){
        d[i]=1;
    }
    int rev=0;
    for(int i=0;i<n;i++){
        //cout<<d[i]<<" ";
        if(d[i]==1) rev+=c[i];
        else rev-=c[i];
    }
    cout<<rev<<endl;
    return 0;
}