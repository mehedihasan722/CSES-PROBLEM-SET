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
const int mod=998244353;
const ll INF=1e14;
const int MAXN=1e6;
const int N=100;
ll cnt;
PQ<ll,vector<ll>,greater<ll>>pq;
void solve()
{
    int n;
    cin>>n;
    ll sum=0;
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        sum+=x;
        cnt++;
        pq.push(x);
        while(sum<0){
            cnt--;
            sum-=pq.top();
            pq.pop();
        }
    }
    cout<<cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}