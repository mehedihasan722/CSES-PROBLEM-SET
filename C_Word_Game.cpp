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
    string s[3][n];
    unordered_map<string,int>mp;
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin>>s[i][j];
            mp[s[i][j]]++;
        }
    }
    for(int i=0;i<3;i++){
        ll cnt=0;
        for(int j=0;j<n;j++){
            if(mp[s[i][j]]==1)
                cnt+=3;
            else if(mp[s[i][j]]==2)
                cnt+=1;
        }
        cout<<cnt<<" ";
    }
    cout<<endl;
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