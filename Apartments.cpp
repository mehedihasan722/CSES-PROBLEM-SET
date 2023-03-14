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
const int mod=1e9+7;
const ll INF=1e14;
const int MAXN=2e5+10;
const int N=530;
int n,m,k,a[MAXN],b[MAXN];
void solve()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int ans=0;
    for(int i=0,j=0;i<n;i++){
        while(j<m&&b[j]<a[i]-k)
            j++;
        if(j<m && b[j]<=a[i]+k){
            ans++;
            j++;
        }
    }
    cout<<ans;
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