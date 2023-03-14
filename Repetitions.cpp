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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    //sort(all(s));
    int cnt=1,x=0;
    if(sz(s)==1){
        cout<<1;
        return 0;
    }
    for(int i=0;i<sz(s)-1;i++){
        if(s[i]==s[i+1])
            cnt++;
        else
            cnt=1;
        x=max(x,cnt);
    }
    cout<<x;
}