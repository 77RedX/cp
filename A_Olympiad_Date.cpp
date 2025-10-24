#include <iostream>
#include <map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,c=0;
        cin>>n;
        map<int,int> a;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            a[x]++;
            if(a[1]>=1 && a[2]>=2 && a[5]>=1 && a[0]>=3 && a[3]>=1)
            {
                c=j+1;
                break;
            }
        }
        for(int k=c;k<n;k++){
            int x;
            cin>>x;
        }
        if(c!=0)
        cout<<c<<endl;
        else
        cout<<0<<endl;
    }
}