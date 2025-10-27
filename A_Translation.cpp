#include <iostream>
using namespace std;
int main()
{
    string s,a;
    cin>>s>>a;
    if(s.size()==a.size()){
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=a[a.size()-i-1])
        {
            cout<<"NO";
            exit(0);
        }
    }
    cout<<"YES";
    }
    else
    cout<<"NO";
}