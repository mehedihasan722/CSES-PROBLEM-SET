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
string s[8];
bool b[15];
void solve()
{
   for(int i=0;i<8;i++){
        cin>>s[i];
   }
   int p[8],ans=0;
   iota(p,p+8,0);
   do{
    bool ok=true;
    for(int i=0;i<8;i++)
        ok&=s[i][p[i]]=='.';
    memset(b,0,15);
    for(int i=0;i<8;i++){
        if(b[i+p[i]])
            ok=false;
        b[i+p[i]]=true;
    }
    memset(b,0,15);
    for(int i=0;i<8;i++){
        if(b[i+7-p[i]])
            ok=false;
        b[i+7-p[i]]=true;
    }
    ans+=ok;
   }while(next_permutation(p,p+8));
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