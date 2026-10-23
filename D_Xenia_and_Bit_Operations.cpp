#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
class SGTree{
    vector<int> seg;
    int x;
    public:
    SGTree(int n){
        x=n;
        n=1LL<<n;
        seg.resize(4*n+1);
    }
    void update(int idx, int low, int high, int i, int val, int level){
        if(low==high){
            seg[idx]=val;
            return;

        }
        int mid=(low+high)/2;
        if(i<=mid) update(idx*2+1, low, mid, i, val, level+1);
        else update(idx*2+2, mid+1, high, i, val, level+1);
        if(x&1){
            if(level%2==0){
                seg[idx]=seg[idx*2+1]|seg[idx*2+2];
            }
            else{
                seg[idx]=seg[idx*2+1]^seg[idx*2+2];
            }
        }
        else{
            if(level%2){
                seg[idx]=seg[idx*2+1]|seg[idx*2+2];
            }
            else{
                seg[idx]=seg[idx*2+1]^seg[idx*2+2];
            }
        }
    }
    int query(int idx, int low , int high, int l, int r){
        //no overlap
        if(low>r || high<l){
            return 0;
        }
        //total overlap
        if(l<=low && high<=r){
            return seg[idx];
        }
        //after this will never execute
        int mid=(low+high)/2; 
        int left=query(idx*2+1, low, mid, l, r);
        int right=query(idx*2+2, mid+1, high, l, r);
        return left+right;
    }
    void build(int idx, int low, int high, vector<int> &arr, int level){
        if(low==high){
            seg[idx]=arr[low];
            return;
        }
        int mid=(low+high)/2;
        build(2*idx+1, low, mid, arr, level+1);
        build(2*idx+2, mid+1, high, arr, level+1);
        if(x&1){
            if(level%2==0){
                seg[idx]=seg[idx*2+1]|seg[idx*2+2];
            }
            else{
                seg[idx]=seg[idx*2+1]^seg[idx*2+2];
            }
        }
        else{
            if(level%2){
                seg[idx]=seg[idx*2+1]|seg[idx*2+2];
            }
            else{
                seg[idx]=seg[idx*2+1]^seg[idx*2+2];
            }
        }
    }
};
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    vi a(1LL<<n);
    for(int i=0; i<1LL<<n; i++){
        cin>>a[i];
    }
    SGTree s(n);
    n=1LL<<n;
    int op=0;
    s.build(0, 0, n-1, a, op);
    
    for(int i=0; i<m; i++){
        int p, b;
        cin>>p>>b;
        a[p]=b;
        op=0;
        s.update(0, 0, n-1, p-1, b, op);
        cout<<s.query(0, 0, n-1, 0, n-1)<<endl;
    }
    return 0;
}