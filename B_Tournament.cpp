#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,j,k;
        cin>>n>>j>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        cin >> arr[i];
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
         maxi=max(maxi,arr[i]);
         if(k>=2)
         cout << "YES" << endl;
         else {
            if(maxi == arr[j-1])
            cout << "YES" << endl;
            else cout << "NO" << endl;
         }
         }
        }
    
