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
    ll n;
    cin>>n;
    if(n*(n+1)/2&1){
        cout<<"NO";
        return;
    }
    vector<int>v1,v2;
    int j=0;
    if(n%4)
        j=3;
    else
        j=4;
    for(int i=0;i<(n-1)/4;++i){
        v1.pb(4*i+1+j);
        v1.pb(4*i+4+j);
        v2.pb(4*i+2+j);
        v2.pb(4*i+3+j);
    }
    if(n%4){
        v1.pb(1);
        v1.pb(2);
        v2.pb(3);
    }
    else{
        v1.pb(1);
        v1.pb(4);
        v2.pb(3);
        v2.pb(2);
    }
    cout<< "YES"<<endl;
    cout<<sz(v1)<<endl;
    for(auto i:v1)
        cout<<i<<" ";
    cout<<endl;
    cout<<sz(v2)<<endl;
    for(auto i:v2)
        cout<<i<<" ";
    cout<<endl;
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