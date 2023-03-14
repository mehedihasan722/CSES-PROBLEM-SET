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
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    ll sum=0,ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=0;i<1<<n;i++){
        ll cs=0;
        for(int j=0;j<n;j++){
            if(i>>j&1){
                cs+=arr[j];
            }
        }
        if(cs<=sum/2){
            ans=max(ans,cs);
        }
    }
    cout<<sum-2*ans;
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