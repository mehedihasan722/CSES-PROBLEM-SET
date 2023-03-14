#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define ar array
#define eb emplace_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define summ(a) (accumulate(all(a),0LL))
#define PI 2*acos(0)
#define torad(x) (x)*((2*acos(0))/180.0)
#define eps 1e-15
#define PQ priority_queue
#define ff first
#define ss second
#define inf 0x3f3f3f3f
const int mod=1e9+7;
const ll INF=1e14;
const int MAXN=2e5+10;
const int N=530;
int x,n,ans[MAXN];
ar<int,3>a[MAXN];
map<int,int>mp;
void solve()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i][1]>>a[i][0];
        a[i][2]=i;
    }
    sort(a,a+n);
    set<ar<int,2>>s;
    for(int i=0;i<n;i++){
        auto it=s.lower_bound({a[i][1]});
        if(it!=s.begin()){
            --it;
            ans[a[i][2]]=(*it)[1];
            s.erase(it);
        }
        else
            ans[a[i][2]]=sz(s);
        s.insert({a[i][0],ans[a[i][2]]});
        
    }
    cout<<sz(s)<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]+1<<" ";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}