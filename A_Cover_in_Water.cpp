#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        int flag=0;
        for(auto a:s){
            if(a=='.'){
                flag++;
                if(flag>2){
                    count=2;
                    break;
                }
                else {
                    count++;
                }
            }
            else if(a=='#'){
                flag=0;
            }
        }
        cout<<count<<endl;
    }
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans;
        if (s.find("...") != string::npos) ans = 2;
        else ans = count(s.begin(), s.end(), '.');

        cout << ans << "\n";
    }
}

*/