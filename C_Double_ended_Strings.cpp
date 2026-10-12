#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int n=a.size(), m=b.size();
        int ans=INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                string c1="";
                for(int x=i; x<=j; x++){
                    c1+=a[x];
                }
                int op1=n-(j-i+1);
                for(int l=0; l<m; l++){
                    for(int o=l; o<m; o++){
                        string c2="";
                        int op2=m-(o-l+1);
                        for(int y=l; y<=o; y++){
                            c2+=b[y];
                        }
                        if(c1==c2){
                            ans=min(ans, op1+op2);
                        }
                    }
                }
            }
        }
        cout<<min(ans,m+n)<<endl;
    }
    return 0;
}