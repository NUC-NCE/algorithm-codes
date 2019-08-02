#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d);
#define plld(d) printf("%lld\n",d);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long long ll;
int n;
int a,b,c,d;
const int mod=1e4+7;
ll exgcd(ll a,ll b,ll &x,ll &y)
{
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    int r=exgcd(b,a%b,x,y);
    int t=x;
    x=y;
    y=t-(a/b)*y;
    return r;
}
ll comb(ll x,ll y)
{
    ll  i,x1=1,y1=1,x2=0,y2=0,j=2;
    for(i=x;i>y;i--)
        x1=x1*i%mod;
    for(i=j;i<=y;i++)
        y1=y1*i%mod;
    exgcd(y1,mod,x2,y2);
    while(x2<0)
        x2+=mod;
    return x1*x2%mod;
}
ll lucas(ll n,ll m)
{
    return m==0?1:comb(n%mod,m%mod)*lucas(n/mod,m/mod)%mod;
}
int main()
{
    slld(n);
    n--;
    ll d1,d2;
    ll x=lucas(2*n,n);
    ll d=exgcd(n+1,mod,d1,d2);
    while(d1<0)
        d1+=mod;
    plld(2*x*d1%mod);
}
