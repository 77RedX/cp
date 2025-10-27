#include <iostream>
using namespace std;
int main()
{
    string h;
    cin>>h;
    int x=0;
    int a[256]={0};
    for(int i=0;i<h.size();i++)
    {
        a[h[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(a[i]!=0)
             x++;
    }
    if(x%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}