#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main(){
     cout<<"Using arp -a \n";
     string cmd="arp -a";
     int stat = system(cmd.c_str());
     if(stat){
        cerr<<"Command exec failed"<<stat<<endl;
     }
}