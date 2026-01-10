#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<string,string>> m(n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[i].first=s;
        sort(s.begin(),s.end());
        m[i].second=s;
    }
    sort(m.begin(), m.end(), [](auto &a, auto &b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
    });
    /*for(int i=0;i<5;i++){
        cout<<m[i].first<<" "<<m[i].second<<endl;
    }*/
    string checker=m[0].second;
    cout<<m[0].first<<" ";
    for(int i=1;i<n;i++){
        if(m[i].second!=checker){
            checker=m[i].second;
            cout<<endl;
        }
        cout<<m[i].first<<" ";
    }
    return 0;
}