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
int n,k;
int a[MAXN];
ll sb,st;
ar<int,2>med={-1};
set<ar<int,2>>bot,top;
void fix()
{
    int m=1+sz(bot)+sz(top);
    if(sz(bot)<(m-1)/2){
        bot.insert(med);
        sb+=med[0];
        med=*top.begin();
        st-=med[0];
        top.erase(med);
    }
    if(sz(bot)>(m-1)/2){
        top.insert(med);
        st+=med[0];
        med=*--bot.end();
        sb-=med[0];
        bot.erase(med);
    }
}
void add(ar<int,2> x)
{
    if(med[0]==-1){
        med=x;
        return;
    }
    if(x<med){
        bot.insert(x);
        sb+=x[0];
    }
    else{
        top.insert(x);
        st+=x[0];
    }
    fix();
}
void rem(ar<int,2> x)
{
    if(x==med){
        med=*top.begin();
        st-=med[0];
        top.erase(med);
    }
    else if(x<med){
        bot.erase(x);
        sb-=x[0];
    }
    else{
        top.erase(x);
        st-=x[0];
    }
    fix();
}
void solve()
{
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(k==1){
        for(int i=0;i<n;i++){
            cout<< 0 <<" ";
        }
        return;
    }
    for(int i=0;i<k-1;i++){
        add({a[i],i});
    }
    for(int i=k-1;i<n;i++){
        add({a[i],i});
        cout<<st-med[0]*(ll)sz(top)+med[0]*(ll)sz(bot)-sb<< " ";
        rem({a[i-k+1],i-k+1});
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