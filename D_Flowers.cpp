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
const int MAXN=1e6+10;
const int N=530;
int n=1e5;
vector<int>dp(n+1),p(n+1);
void solve()
{
    int t,k;
    cin>>t>>k;
    for(int i=1;i<k;i++)
        dp[i]=1;
    dp[k]=2;
    for(int i=k+1;i<=n;i++)
        dp[i]=(dp[i-1]+dp[i-k])%mod;
    for(int i=1;i<=n;i++)
        p[i]=(p[i-1]+dp[i])%mod;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans=(p[b]-p[a-1])%mod;
        if(ans<0)
            ans+=mod;
        cout<<ans<<endl;
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