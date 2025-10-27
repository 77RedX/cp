#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_soft=k*l;
    int total_lime=c*d;
    int toast_soft=total_soft/nl;
    int toast_salt=p/np;
    int total_toast=min(toast_soft,min(toast_salt,total_lime));
    cout<<total_toast/n;
}