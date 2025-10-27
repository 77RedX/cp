#include <iostream>
using namespace std;
int main()
{
    int n,y=0;
    cin>>n;
    while(n>0)
    {
        int x=0,a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            x++;
        }
        if(x>=2)
        y++;
        n--;
    }
    cout<<y;
}