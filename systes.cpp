#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;


int main() {
    string cmd= "arp -a";
    int status = std::system(cmd.c_str());
    if (status != 0) {
        cerr << "Command execution failed or returned error code: " << status << "\n";
    }
    return 0;
}