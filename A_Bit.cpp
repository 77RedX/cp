#include <iostream>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    while(n>0)
    {
        string a;
        cin>>a;
        if(a=="++X")
        ++x;
        else if(a=="X++")
        x++;
        else if(a=="--X")
        --x;
        else if(a=="X--")
        x--;
        n--;
    }
    cout<<x;
}