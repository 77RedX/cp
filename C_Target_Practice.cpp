#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=10;
        vector<int> a(n);
        int score=0;
        for(int i=1;i<=n;i++){
            string s;
            cin>>s;
            for(int j=0;j<10;j++){
                int ring;
                if(s[j]=='X'){
                    int index=j+1;
                    int col=(index>5)?(11-index):index;
                    int row=(i>5)?(11-i):i;
                    ring=min(row,col);
                    // cout<<ring<<" ";
                    score+=ring;
                }
            }
            // cout<<endl;
        }
        cout<<score<<endl;
    }
}