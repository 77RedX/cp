#include <iostream>
using namespace std;
int main()
{
    long long int n,l=0,i=0;
    cin>>n;
    for(i=0; n!=0;i++)
    {
        int x=n%10;
        if(x==4 || x==7)
        {
            l++;
        }
        n=n/10;
    }
    if(l==4 || l==7)
    cout<<"YES";
    else
    cout<<"NO";
}