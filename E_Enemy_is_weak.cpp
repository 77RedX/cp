#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
    Node(): val(0), left(nullptr), right(nullptr) {}
    Node(int v): val(v), left(nullptr), right (nullptr){}
};

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vi a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    Node* root = new Node(a[0]);
    for(int i=1; i<n; i++){
        Node* tmp=root;
        Node* node = new Node(a[i]);
        while(true){ //distinct values
            if(tmp->val>a[i]){
                if(tmp->left) tmp=tmp->left;
                else{
                    tmp->left=node;
                    break;
                }
            }
            else{
                if(tmp->right) tmp=tmp->right;
                else{
                    tmp->right=node;
                    break;
                }
            }
        }
    }

    
    return 0;
}