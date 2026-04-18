#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mini=1e9;
        int maxi=0;
        int diff=1e9;
        vector<int> a(3);
        vector<int> f(3);
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                cin>>a[j];
                if(i==0){
                    f[j]=a[j];
                }
            }
            if(i==1){
                for(int j=0;j<3;j++){
                    for(int k=0;k<3;k++){
                        //cout<<a[j]<<" "<<f[k]<<endl;
                        if(abs(a[j]-f[k])<diff){
                            mini=min(a[j],f[k]);
                            maxi=max(a[j],f[k]);
                            diff=maxi-mini;
                            // cout<<mini<<" "<<maxi<<endl;
                        }
                    }
                }
            }
            else{
                int tmpdiff=1e9,tmpmini=mini,tmpmaxi=maxi;
                for(int j=0;j<3;j++){
                    tmpmini=min(tmpmini,a[j]);
                    tmpmaxi=max(tmpmaxi,a[j]);
                    int newdiff=tmpmaxi-tmpmini;
                    if(newdiff<tmpdiff){
                        continue;
                    }
                    else{tmpmini=mini;
                    tmpmaxi=maxi;}
                }
            }
        }
        cout<<maxi-mini<<endl;
    }
}
