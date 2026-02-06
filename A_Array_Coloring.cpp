#include<bits/stdc++.h>
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
        int oneth;
        int secnd;
        int i=0;
        int flag=0;
        for(i=0;i<n;i++){
            int x;
            cin>>x;
            if(i==0) oneth=x;
            else if(i==1) secnd=x;
            else if(i>1 && i%2==0){
                if((x+oneth)%2){
                    flag++;
                }
                else{
                    oneth=x;
                }
            }
            else if(i>1 && i%2!=0){
                if((x+secnd)%2){
                    flag++;
                }
                else{
                    secnd=x;
                }
            }
        }
        if(flag) cn;// take all input, dont break earlier
        else cy;
    }   
    return 0;
}