#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
class Sgtree{
struct Node
{
    int open=0;
    int close=0;
    int full=0;
};
vector<Node> seg;
public:
    Sgtree(int n){
        seg.resize((4*n)+1);
    }
    void build(string &a, int idx, int low, int high){
        if(low==high){
            if(a[low]=='('){
                seg[idx].open=1;
            }
            else{
                seg[idx].close=1;
            }
            return;
        }
        int mid=(low+high)/2;
        build(a, idx*2+1, low, mid);
        build(a, idx*2+2, mid+1, high);
        int matched=min(seg[idx*2+1].open, seg[idx*2+2].close);
        seg[idx].full=seg[idx*2+1].full+ seg[idx*2+2].full + matched;
        seg[idx].open=seg[idx*2+1].open+seg[idx*2+2].open-matched;
        seg[idx].close=seg[idx*2+1].close+seg[idx*2+2].close-matched;
    }
    void printme(){
        for(auto i: seg){
            cout<<i.full<<" ";
        }
        cout<<endl;
    }
    Node query(int idx, int low, int high, int l, int r){
        //complete overlap low & high inside l and r
        if(low>=l && high<=r){
            return seg[idx];
        }
        //no overlap
        if(low>r || high<l){
            return {0, 0, 0};
        }
        //partial overlap
        int mid=(low+high)/2;
        Node left=query(idx*2+1, low, mid, l, r);
        Node right=query(idx*2+2, mid+1, high, l, r);
        Node res;
        int matched=min(left.open, right.close);
        res.full=left.full+right.full+matched;
        res.open=left.open+right.open-matched;
        res.close=left.close+right.close-matched;
        return res;
    }
    
};
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.size();
    Sgtree sg(n);
    sg.build(s, 0, 0, n-1);
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int l, r;
        cin>>l>>r;
        l--; r--;
        cout<<(sg.query(0, 0, n-1, l, r).full)*2<<endl;
    }
    return 0;
}