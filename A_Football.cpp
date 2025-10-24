#include <iostream>
using namespace std;
int main()
{
    string h;
    cin>>h;
    int flag=0;
    //int i;
    for(int i=0;i<h.size();i++)
    {
        for(int j=i;j<i+7;i++)
        {
            if(h[i]==h[j]){
                flag++;
                if(flag==6)
                {
                    cout<<"YES";
                    exit(0);
                }
                else
            continue;}
            else{
                flag=0;
            break;}
        }
    }
    cout<<"NO";
}