#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(a[0]==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
/**
   author : akshay gautam
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define vi vector<int>
#define f(n) for(int i = 0 ; i < n ; i ++)
#define vii vector<vector<int>>
#define mi map<int,int>
#define pii pair<int,int>
#define maxheap(type) priority_queue<type>
#define minheap(type) priority_queue<type, vector<type>, greater<type>>
#define T(t) int t ; cin >> t ; while( t -- )
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define MXI 1000000007LL
#define Guess_Who_Is_This ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(...) 42

using namespace std;

// ------------------------------------------------------- SOME CONSTANTS TYPe------------------------------------------------- 
vector<int> dr = {1 , 0 , -1 , 0};
vector<int> dc = {0 , 1 , 0 , -1};
bool ispow2(int x) { return (x ? !(x & (x - 1)) : 0); }
//  ------------------------------------------------------- SOLUTION TO THE PROBLEM ------------------------------------------------- 

void world()
{
    
}

int32_t main(){
    Guess_Who_Is_This
    T(t)
    {
        world();
    }
    return 0;
*/