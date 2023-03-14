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
int n;
ll x;
ar<int,2>a[MAXN];
void solve()
{
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>a[i][0];
        a[i][1]=i;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        ll x2=x-a[i][0];
        for(int j=i+1,k=n-1;j<k;j++){
            while(j<k && a[j][0]+a[k][0]>x2)
                --k;
            if(j<k && a[j][0]+a[k][0]==x2){
                cout<<a[i][1]+1<<" "<<a[j][1]+1<<" "<<a[k][1]+1;
            return;
            }
        }
    }
    cout<<"IMPOSSIBLE";
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