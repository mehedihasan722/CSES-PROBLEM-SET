#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
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
const int mod=998244353;
const ll INF=1e14;
const int MAXN=2e5+10;
const int N=530;
void solve()
{
    ll y,x;
    cin>>y>>x;
    ll z=max(y,x);
    ll z2=(z-1)*(z-1),ans;
    if(z&1){
        if(y==z)
            ans=z2+x;
        else
            ans=z2+2*z-y;
    }
    else{
        if(x==z)
            ans=z2+y;
        else
            ans=z2+2*z-x;
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}