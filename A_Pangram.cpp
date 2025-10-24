#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[26]={0};
    for(int i=0;i<n;i++)//lowercase
    {
        s[i]=tolower(s[i]);
        a[(int)s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(a[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}