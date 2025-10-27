#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }// can also use a.compare(b), gives same output
    if(a>b)
    cout<<"1";
    if(a<b)
    cout<<"-1";
    if(a==b)
    cout<<"0";
}