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
    string a,b,c;
    int cnt1=0,cnt2=0,cnt3=0;
    set<char>x,y,z;
    for(int i=0;i<n;i++){
        cin>>a;
        x.insert(a);
    }
    for(int i=0;i<n;i++){
        cin>>b;
        y.insert(b);
    }
    for(int i=0;i<n;i++){
        cin>>c;
        z.insert(c);
    }
    for(int i=0;i<sz(x);i++){
        if(x[i]!=y[i]&&x[i]!=z[i]){
            cnt1+=3;
        }
        else if(x[i]!=y[i]&&x[i]==z[i]||x[i]==y[i]&&x[i]!=z[i]){
            cnt1+=1;
        }
        else if(x[i]==y[i]&&x[i]==z[i]){
            cnt1+=0;
        }
    }
    cout<<cnt1<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
}