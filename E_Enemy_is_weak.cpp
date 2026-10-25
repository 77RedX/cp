#include <bits/stdc++.h>
#define int long long
#define MXI 1000000007LL
#define vi vector<int>
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define fn for(int i=0;i<n;i++)
using namespace std;
class Sgtree{
    public:
    vector<int> seg;
    Sgtree(int n){
        seg.resize((4*n)+1);
    }
    void update(int idx, int low, int high, int i, int val){
        if(low==high){
            seg[idx]+=val;
            return;
        }
        int mid=(low+high)/2;
        if(i<=mid){
            update(idx*2+1, low, mid, i, val);
        }
        else{
            update(idx*2+2, mid+1, high, i, val);
        }
        seg[idx]=seg[idx*2+1]+seg[idx*2+2];
    }
    void build(vector<int> &a, int idx, int low, int high){
        if(low==high){
            seg[idx]=a[low];
            return;
        }
        int mid=(low+high)/2;
        build(a, idx*2+1, low, mid);
        build(a, idx*2+2, mid+1, high);
        seg[idx]=seg[idx*2+1]+seg[idx*2+2];
    }
    int query(int idx, int low, int high, int l, int r){
        //complete overlap low & high inside l and r
        if(low>=l && high<=r){
            return seg[idx];
        }
        //no overlap
        if(low>r || high<l){
            return 0;
        }
        //partial overlap
        int mid=(low+high)/2;
        int left=query(idx*2+1, low, mid, l, r);
        int right=query(idx*2+2, mid+1, high, l, r);
        return left+right;
    }
    
};
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vi a(n);
    fn{
        cin>>a[i];
    }
    vi temp = a;
    sort(temp.begin(), temp.end());
    for(int i = 0; i < n; i++) {
        a[i] = lower_bound(temp.begin(), temp.end(), a[i]) - temp.begin();
    }
    vector<int> freq(n, 0);
    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }
    Sgtree st(n);
    st.build(freq, 0, 0, n-1);
    vector<int> right(n);
    for(int i=0; i<n; i++){
        st.update(0, 0, n-1, a[i], -1);
        right[i]=st.query(0, 0, n-1, 0, a[i]-1);
    }
    st.build(freq, 0, 0, n-1);
    vector<int> left(n);
    for(int i=n-1; i>=0; i--){
        st.update(0, 0, n-1, a[i], -1);
        left[i]=st.query(0, 0, n-1, a[i]+1, n-1);
    }
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=left[i]*right[i];
    }
    cout<<ans<<endl;
    return 0;
}