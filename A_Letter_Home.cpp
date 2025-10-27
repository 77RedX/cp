#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> a(n);
        int minimum=INT_MAX;
        int maximum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            minimum=min(minimum,a[i]);
            maximum=max(maximum,a[i]);
        }
        if(s<minimum){
            cout<<(minimum-s)+(maximum-minimum)<<endl;
        }
        else if(s==minimum){
            cout<<maximum-minimum<<endl;
        }
        else if(s>maximum){
            cout<<(s-maximum)+(maximum-minimum)<<endl;
        }
        else{
            int result;
            int x=(maximum-minimum)+1;
            if(s-minimum<maximum-s){
                cout<<(2*(s-minimum))+maximum-s<<endl;
            }
            else{
                cout<<(2*(maximum-s))+s-minimum<<endl;
            }
        }
    }
}
// steps = (max_x - min_x) + min(abs(s - min_x), abs(s - max_x)); very simplified 1 line code
