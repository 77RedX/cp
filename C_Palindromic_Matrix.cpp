#include <bits/stdc++.h>

#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //  cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map < int, int > mp;
        for (int i = 0; i < n * n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        if (n % 2 == 0)
        {
            int flag = true;
            vector < int > vec;
            for (auto it: mp)
            {
                if (it.second % 4 != 0)
                    flag = false;
                int c = it.second;
                while (c > 0)
                {
                    vec.push_back(it.first);
                    c = c - 4;
                }
            }
            if (flag == false)
            {
                cout << "NO" << endl;
                continue;
            }
            else cout << "YES" << endl;
            vector < vector < int >> mat(n, vector < int > (n, -1));
            int k = 0;
            for (int i = 0; i < n / 2; i++)
            {
                for (int j = 0; j < n / 2; j++)
                {
                    mat[i][j] = vec[k];
                    mat[i][n - 1 - j] = vec[k];
                    mat[n - 1 - i][j] = vec[k];
                    mat[n - 1 - i][n - 1 - j] = vec[k];
                    k++;
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                    cout << mat[i][j] << " ";
                cout << endl;
            }
        }
        else {
            int flag = true;
            vector < int > vec;
            vector < int > four;
            vector < int > two;
            vector < int > one;
            int fo = n * n - 1 - 2 * (n - 1);
            int to = 2 * (n - 1);
            for (auto it: mp)
            {
                int c = it.second;
                while (c >= 4)
                {
                    if (four.size() * 4 < fo)
                        four.push_back(it.first);
                    else break;
                    c = c - 4;
                }
                while (c >= 2)
                {
                    if (two.size() * 2 < to)
                        two.push_back(it.first);
                    else break;
                    c = c - 2;
                }
                while (c >= 1)
                {
                    if (one.size() <= 1)
                        one.push_back(it.first);
                    else flag = false;
                    c = c - 1;
                }
            }
            vector < vector < int >> mat(n, vector < int > (n, -1));
            if (flag == false)
            {
                cout << "NO" << endl;
                continue;
            }
            else {
                cout << "YES" << endl;
            }
            int k = 0;
            for (int i = 0; i < n / 2; i++)
            {
                for (int j = 0; j < n / 2; j++)
                {
                    mat[i][j] = four[k];
                    mat[i][n - 1 - j] = four[k];
                    mat[n - 1 - i][j] = four[k];
                    mat[n - 1 - i][n - 1 - j] = four[k];
                    k++;
                }
            }
            k = 0;
            for (int i = 0; i < n / 2; i++)
            {
                mat[n / 2][i] = two[k];
                mat[n / 2][n - 1 - i] = two[k];
                k++;
            }
            for (int i = 0; i < n / 2; i++)
            {
                mat[i][n / 2] = two[k];
                mat[n - 1 - i][n / 2] = two[k];
                k++;
            }
            mat[n / 2][n / 2] = one[0];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                    cout << mat[i][j] << " ";
                cout << endl;
            }
        }
    }
    return 0;
}