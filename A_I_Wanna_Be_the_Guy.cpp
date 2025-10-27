#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> a;
    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        a.insert(x);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int y;
        cin>>y;
        a.insert(y);
    }
    for(int i=1;i<=n;i++){
        if(a.find(i)==a.end()){ //s.end() points beyond the last element whereas s.begin() points at the first element.
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
}