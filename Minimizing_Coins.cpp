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
const int MAXN=1e6;
const int N=100;
int n,c[MAXN],x;
int dp[MAXN+1];
void solve()
{
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for(int i=1;i<=x;i++){
        dp[i]=1e9;
        for(int j=0;j<n;j++){
            if(c[j]<=i){
                dp[i]=min(dp[i],dp[i-c[j]]+1);
            }
        }
    }
    if(dp[x]>=1e9)
        cout<<-1;
    else
        cout<<dp[x];
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