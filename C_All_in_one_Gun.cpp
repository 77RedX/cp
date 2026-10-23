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
        int n, h, k;
        cin>>n>>h>>k;
        vi a(n);
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        vi pref(n);
        vi suff(n);
        int maxe=a[n-1];
        for(int i=n-2; i>=0; i--){
            suff[i]=maxe;
            maxe=max(suff[i],a[i]);
        }
        pref[0]=a[0];
        for(int i=1; i<n; i++){
            pref[i]=min(pref[i-1], a[i]);
        }
        vi presum(n);
        presum[0]=a[0];
        for(int i=1; i<n; i++){
            presum[i]=presum[i-1]+a[i];
        }
        vi maxi(n);
        for(int i=0; i<n; i++){
            maxi[i]=max(presum[i], presum[i]+suff[i]-pref[i]);
            //cout<<maxi[i]<<" ";
        }
        //cout<<endl;
        int ans=0;
        if(sum<=h){
            ans+=(h/sum)*(n);
            ans+=((h/sum)-1)*k;
            if(h%sum){
                ans+=k;
                for(int i=0; i<n; i++){
                    if(maxi[i]>=(h%sum)){
                        ans+=i+1;
                        break;
                    }
                }
            }
        }
        else{
            for(int i=0; i<n; i++){
                if(maxi[i]>=(h%sum)){
                    ans+=i+1;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}