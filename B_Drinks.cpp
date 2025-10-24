#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    double s=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s+=x;
    }
    s/=n;
    cout<<fixed<<setprecision(12)<<s;
}