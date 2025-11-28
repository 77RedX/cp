#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(n%2){
            cout<<4<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<2<<" "<<n<<endl;
        }
        /*agr even n hai, jo bhi number bane pehle xor loop pe
        next time sab ek doosre ko cancel krdega
        ez*/
        else{
            cout<<"2\n";
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
    }
}