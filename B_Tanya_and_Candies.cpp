#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    //cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> nums(n);
        for(int i=0;i<n;i++)
        {
            cin >> nums[i];
        }

        int e_pre = 0;
        int o_pre = 0;

        vector<int> odd_pre(n);
        vector<int> even_pre(n);

        for(int i=0;i<n;i++)
        {
            if(i&1)           //odd index
            {
                o_pre += nums[i];
            }

            else
            {
                e_pre += nums[i];
            }

            odd_pre[i] = o_pre;
            even_pre[i] = e_pre;
        }


        int e_suff = 0;
        int o_suff = 0;

        vector<int> odd_suff(n);
        vector<int> even_suff(n);

        for(int i=n-1;i>=0;i--)
        {
            if(i&1)
            {
                o_suff += nums[i];
            }

            else
            {
                e_suff += nums[i];
            }

            odd_suff[i] = o_suff;
            even_suff[i] = e_suff;
        }

        int ans = 0;

        for(int i=0;i<n;i++)
        {
            if(i&1)      //odd index
            {
                if(odd_pre[i] - nums[i] + even_suff[i] == even_pre[i] + odd_suff[i] - nums[i]) ans++;
            }

            else         //even index
            {
                if(even_pre[i] - nums[i] + odd_suff[i] == odd_pre[i] + even_suff[i] - nums[i]) ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}