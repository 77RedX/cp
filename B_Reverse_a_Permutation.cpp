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
        fn cin>>a[i];
        int l;
        for(l=0;l<n;l++){
            if(a[l]<n-l){
                break;
            }
        }
        if(l==n){
            fn cout<<a[i]<<" ";
            cout<<endl;
        }
        else{
            int pos;
            fn{
                if(a[i]==n-l){
                    pos=i;
                    break;
                }
            }
            //cout<<l<<" "<<pos<<" ";
            reverse(a.begin()+l,a.begin()+pos+1);
            fn{
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }   
    return 0;
}