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
    string s;
    cin>>s;
    int c[26]={},c1=0;
    for(char ch:s){
        ++c[ch-'A'];
    }
    for(int i=0;i<26;i++){
        c1+=c[i]&1;
    }
    if(c1>1){
        cout<< "NO SOLUTION ";
        return;
    }
    string t;
    for(int i=0;i<26;i++){
        if(c[i]&1^1){
            for(int j=0;j<c[i]/2;j++){
                t+=(char)('A'+i);
            }
        }
    }
    cout<<t;
    for(int i=0;i<26;i++){
        if(c[i]&1){
            for(int j=0;j<c[i];j++){
                cout<<(char)('A'+i);
            }
        }
    }
    reverse(all(t));
    cout<<t;

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