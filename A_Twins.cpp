#include <iostream>
using namespace std;
int main()
{

    int n,total=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) //input
    {
        cin>>a[i];
        total+=a[i];
    }
    for(int i=0;i<n;i++) //sorting
    {
        for (int j=i;j<n;j++)
        {
            if(a[i]>a[j])
            swap(a[i],a[j]);
        }
    }
    int me=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(me<=total)
        {
            me+=a[n-1-i];
            total-=a[n-i-1];
            c++;
        }
        else
        break;
    }
    cout<<c;
}