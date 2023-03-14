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
#define pii pair<int,int>
#define pli pair<ll,int>
#define inf 0x3f3f3f3f
const int mod=998244353;
const ll INF=1e14;
const int MAXN=2e5+10;
const int N=100;
int n,m,s,t;
int vis[MAXN];
vector<vector<pii>>adj;
PQ<pii,vector<pii>,greater<pii>>pq;
void Dijsktra(int s)
{
    memset(vis,inf,sizeof(vis));
    vis[s]=0;
    pq.push(pii(vis[s],s));
    pii p;
    while(!pq.empty()){
        int u=pq.top().ss;
        int v=pq.top().ff;
        pq.pop();
        if(v>vis[u])
            continue;
        for(int i=0;i<sz(adj[u]);i++){
            if(vis[u]+adj[u][i].ss<vis[adj[u][i].ff]){
                vis[adj[u][i].ff]=vis[u]+adj[u][i].ss;
                pq.push(pii(vis[adj[u][i].ff],adj[u][i].ff));
            }
        }
    }
}
void solve()
{
    int n,m,s,t;
    cin>>n>>m>>s>>t;
    adj.assign(n,vector<pii>(0));
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].pb(pii(v,w));
        adj[v].pb(pii(u,w));
    }
    Dijsktra(s);
    if(vis[t]!=inf)
        cout<<vis[t]<<endl;
    else
        cout<<"unreachable"<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1,i=1;;
    cin>>t;
    while(t--){
        cout<<"Case #"<<i<<": ";
        solve();
        i++;
    }
}