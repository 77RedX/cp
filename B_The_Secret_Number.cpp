#include <bits/stdc++.h>
using namespace std;
int extract(int n){

}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int counter=0;
        vector<long long> a;
        // cout<<n/(int(1+pow(10,1)))<<" ";
        for(int i=1;i<18;i++){
            int x=(1+pow(10,i));
            if(n%(x)==0){
                cout<<x<<endl;
                a.push_back(n/(int(1+pow(10,i))));
                counter++;
            }
        }
        cout<<counter<<endl;
       /* for(auto x:a){
            cout<<x<<" ";
        }*/
        cout<<endl;
    }
}