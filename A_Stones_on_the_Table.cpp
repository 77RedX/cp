#include <iostream>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)// used i<n-1 so as to not go out of bounds in array
    {
        if(a[i]==a[i+1])
        x++;
    }
    cout<<x;
}