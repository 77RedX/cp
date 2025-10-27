#include <iostream>
using namespace std;
int main()
{
    string h;
    cin>>h;
    for(int i=0;i<h.size();i+=2)
    {
        for(int j=i+2;j<h.size();j+=2)
            if(h[i]>h[j])
            {
                swap(h[i],h[j]);
            }
    }
    cout<<h;
}