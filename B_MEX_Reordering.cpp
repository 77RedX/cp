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
        int zflag=0;
        int oflag=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0)zflag++;
            if(x==1)oflag++;
        }
        if(zflag && oflag){//sort the array, it will always be possible here
            cy;
        }
        else if(zflag==1 && oflag==0){ //edge case, cy here also
            cy;
        }
        else{
            cn;
        }
    }   
    return 0;
}