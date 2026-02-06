#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
void collect(int op,set<int> &prime){
    for(int i=2;i*i<=op;i++){
        if(op%i==0){
            prime.insert(i);
            while(op%i==0){
                op/=i;
            }
        }
    }
    if(op>1){
        prime.insert(op); //if any prime number got left out
    }
}
void remote(int op, vi& state, set<int> & prime){
    if(op<0){//shut down
        op=abs(op);
        if(state[op]) {
            state[op]=0;
            cout<<"Success\n";
        }
        else{
            cout<<"Already off\n";
        }
    }
    else{//switch on
        if(state[op]){
            cout<<"Already on\n";
        }
        else{
            //conflict?
            int conflict=-1;
            for(auto i:prime){
                if(op%i==0){
                    conflict=i;
                    break;
                }
            }
            if(conflict>0){
                for(int i=0;i<state.size();i++){
                    if(state[i]){
                        if(i%conflict==0){
                            conflict=i;
                        }
                    }
                }
                cout<<"Conflict with "<<conflict<<endl;
            }
            else{
                cout<<"Success\n";
                state[op]=1;
                collect(op, prime);
            }
        }
    }

}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vi state(n+1,0);
    for(int i=0;i<m;i++){
        char c;
        cin>>c;
        int op;
        cin>>op;
        op=c=='-'?-op:op;
        set<int> prime;
        for(int i=0;i<m;i++)remote(op,state,prime);
    }
    return 0;
}