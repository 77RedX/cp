#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<26){
        cout<<"NO";
        return 0;
    }
    else{
        string s;
        cin>>s;
        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
            if((int)s[i]>='a' && (int)s[i]<='z'){
                hash[s[i]-'a']++;
            }
        }
        for(int x=0;x<26;x++){
            if(hash[x]==0){
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
        return 0;
    }
}