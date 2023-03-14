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
char ch[55][55];
int a[55][55];
PQ<ll,vector<ll>,greater<ll>>pq;
void solve()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%s",ch[i]+1);
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=m;j++){
            a[i][j]=0;
        }
    }
    bool flag=true;
    int tot=0;
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            int s=0;
            for(int k=0;k<=1;k++){
                for(int l=0;l<=1;l++){
                    if(ch[i+k][j+l]=='*')
                            s++;
                }
            }
            if(s==3){
                tot++;
                for(int k=0;k<=1;k++){
                    for(int l=0;l<=1;l++){
                        if(ch[i+k][j+l]=='*')
                                a[i+k][j+l]=tot;
                        }
                    }
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            int s=0;
            for(int k=0;k<=1;k++){
                for(int l=0;l<=1;l++){
                    if(ch[i+k][j+l]=='*'){
                        if(a[i+k][j+l]==0)
                            flag=false;
                        if(s==0)
                            s=a[i+k][j+l];
                        else if(s!=a[i+k][j+l])
                            flag=false;
                    }
                }
            }
        }
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    scanf("%d",&t);
    while(t--){
        solve();
    }
}