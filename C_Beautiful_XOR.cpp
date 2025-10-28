#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
using namespace std;
/*Lets take cases here,
1. when a<b and a and b k beech me 2 ki power aa rhi, then impossible
2. when a>b and a and b k beech me 2 ki power aa rhi, then make a^x where x is the no. added to make a 1-nearest
   greater power of 2, then a^(a-b)
3. when a<b and no power coming in b/w, then just do a^(b-a)WRONG LOGIC LMAO SCAMMED
4. when a>b and no power coming in b/w, then do a^(a-b)*/
int power_exist(int a,int b){
    int l=max(a,b);
    for(int i=2;i<=l;i<<=1){
        //cout<<i<<endl;
        if((i>a || i>b) && i<=l){
            return i;
        }
    }
    return 0;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b) {
            cout<<"0\n";
            continue;
        }
        int i=power_exist(a,b);
        //cout<<i<<endl;
        if(i){
            if(a<b) cout<<-1<<endl;
            else{
                cout<<2<<endl;
                for( ;i<=a;i<<=1);
                //cout<<i<<endl;
                int x=i-1-a;
                cout<<x<<" ";
                a^=(x);
                cout<<a-b<<endl;
            }
        }
        else{
            if(a<b){
                cout<<2<<endl;
                for(i=2;i<=b;i<<=1);
                //cout<<i<<endl;
                int x=i-1-a;
                cout<<x<<" ";
                a^=(x);
                cout<<a-b<<endl;
            }
            else{
                cout<<2<<endl;
                for(i=2;i<=a;i<<=1);
                //cout<<i<<endl;
                int x=i-1-a;
                cout<<x<<" ";
                a^=(x);
                cout<<a-b<<endl;
            }
        }
        
    }
    return 0;
}
/*
if(a==b){
    cout<<
}
else{
    int l=max(a,b);
    for(int i=1;i<=l;i++);
    int x=i-1-a;
    a^=x;
    int y=a-b;
    a^=y;
    if(a==b)
    cout<<x<<" ";
    cout<<y<<endl;
    else cout<<"-1";    
}
*/