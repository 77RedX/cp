#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int sm=0,c=0,l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i]>=65 && s[i]<=(65+26))
        c++;
        else if(s[i]>=97 && s[i]<=(97+26))
        sm++;
    }
    for(int i=0;i<l;i++)
    {
        if(c==sm)
        {
            s[i]=tolower(s[i]);
        }   
        else if(c>sm)
        {
            s[i]=toupper(s[i]);
        }
        else if(c<sm)
        {
            s[i]=tolower(s[i]);
        }
    } 
    cout<<s;
}