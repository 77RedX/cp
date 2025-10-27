#include <iostream>
using namespace std;
int main()
{
    int n,a=0,d=0;
    string s;
    cin>>n>>s;
    for(auto i:s)
    {
        if(i=='A')
        a++;
        else if(i=='D')
        d++;
    }
    if(a>d)
    cout<<"Anton";
    else if(a<d)
    cout<<"Danik";
    else if(a==d)
    cout<<"Friendship";

}