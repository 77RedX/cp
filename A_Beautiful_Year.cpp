#include <iostream>
#include <algorithm>
using namespace std;
string ntoc(int n)
{
    string h;
    while(n!=0)
    {
        h+=(char)((n%10)+48);
        n/=10;
    }
    return h;
}
int main()
{
   int y;
   int f;
   cin>>y;
   while(f!=0)
   {
    y++;
    string l= ntoc(y);
    
   }
}