#include <iostream>
using namespace std;
int main()
{
    int n,t=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int enter,exit;
        cin>>exit>>enter;
        t+=enter;
        t-=exit;
        if(t>c)
        c=t;
    }
    cout<<c;
}