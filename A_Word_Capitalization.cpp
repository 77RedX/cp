#include <iostream>
using namespace std;
int main()
{
    string h;
    cin>>h;
    if((int)h[0]>96)
    {
        h[0]=toupper(h[0]);
    }
    cout<<h;
}