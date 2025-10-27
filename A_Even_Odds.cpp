#include <iostream>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    /*int a[n];                  Issue with using an array here is that the question says we can have upto 10^12 inputs, but an array cannot store more than 10^7 inputs 
    int c=0;
    for(int i=1;i<=n;i+=2)
    {
        a[c]=i;
        c++;
    }
    for(int j=2;j<=n;j+=2)
    {
        a[c]=j;
        c++;
    }
    cout<<a[k-1];*/
    long long odd=(n+1)/2; //int ki mkc 10^9 baar
    if(k<=odd)
    {
        cout<<(k*2)-1;
    }
    else
    {
        cout<<2*(k-odd);
    }
}