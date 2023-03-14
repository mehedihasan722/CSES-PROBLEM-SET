#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define PI 2*acos(0)
#define torad(x) (x)*((2*acos(0))/180.0)
#define eps 1e-15
#define PQ priority_queue
#define ff first
#define ss second
const int mod=998244353;
const ll INF=1e14;
const int MAXN=2e5+10;
const int N=1010;
int vis[MAXN];
int son[MAXN];
vector<vector<int>>vi;
bool flag=false;
void dfs(int u,int par)
{
    vis[u]=1;
    for(auto v:vi[u]){
        if(vis[v]==0){
            dfs(v,u);
        }
        else{
            if(par!=v)
                flag=true;
        }
    }
}
void bfs(int v)
{
    queue<int>que;
    que.push(v);
    vis[v]=1;
    while(!que.empty()){
        int u=que.front();
        que.pop();
        for(auto it:vi[u]){
            if(!vis[it]){
                que.push(it);
                vis[it]=1;
                son[it]=son[u]+1;
            }
        }
    }
}
void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int>book(n);
    for(int i=0;i<n;i++){
        cin>>book[i];
    }
    ll prefix_sum=0;
    ll ans=0;
    map<ll,int>sum;
    sum[0]=1;
    for(auto i:book){
        prefix_sum+=i;
        ans+=sum[prefix_sum-x];
        sum[prefix_sum]++;
    }
    cout<<ans<<endl;
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