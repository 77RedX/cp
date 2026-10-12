#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a, b;
        cin>>a>>b;
        vector<int> x(n);
        int bal=0;
        // cout<<"working"<<endl;
        for(int i=0; i<n; i++){
            if(a[i]=='0') bal--;
            else bal++;
            x[i]=bal;
        }
        int flip=0;
        int flag=0;
        for(int i=n-1; i>=0; i--){
            if(a[i]!=b[i] && !flip){
                flip=1;
                if(x[i]!=0){
                    flag=1;
                    break;
                }
            }
            if(a[i]==b[i] && flip){
                flip=0;
                if(x[i]!=0){
                    flag=1;
                    break;
                }
            }
        }
        if(flag) cn;
        else cy;
    }   
    return 0;
}