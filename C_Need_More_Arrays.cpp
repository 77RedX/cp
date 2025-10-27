#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> s;
        vector<int> a;
        int counter=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        for(auto x: s){
            a.push_back(x);
        }
        n=s.size();
            int res=0;
            for(int i=0;i<n;){
                int max=1;
                int j;
                for(j=i;j<n-1;j++){
                    if(a[j]+1==a[j+1]){
                        max++;
                    }
                    else break;
                }
                if(max>1){
                    res+=(max%2==0)?max/2:(max/2)+1;
                }
                else res++;
                i=j+1;
            }
            cout<<res<<endl;
    }
}


