#include <iostream>
using namespace std;
int main()
{
    int n,h,w;
    cin>>n>>h;
    w=n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>h){
            w+=1;
        }
    }
    cout<<w;
}