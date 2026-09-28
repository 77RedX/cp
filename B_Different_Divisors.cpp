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
        int d;
        cin>>d;
        int start=3*d+1;
        while(true){
            int count=1;
            int i=2;
            int last=1;
            while(i<=start){
                if(start%i==0){
                    if(i-last<d) break; //not possible
                    last=i;
                    count++;
                    if(count>=4){
                        break;
                    }
                }
                i++;
            }
            if(count>=4) break;
            start++;
        }
        cout<<start<<endl;
    }
    return 0;
}