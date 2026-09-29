#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin >> n >> k;

    if(k*(k-1) < n)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
          int x=0;
        for(int i=1;i<=k;i++)
        {
            for(int j=i+1;j<=k;j++)
            {
                cout << i << " " << j << endl;
                x++;
                if(x==n)
                break;
                cout << j << " " << i << endl;
                x++;
                if(x==n)
                break;
            }
            if(x==n)
            break;
        }
    }

    return 0;
}