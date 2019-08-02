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
#define pd(d) printf("%d\n",d)
#define plld(d) printf("%lld\n",d)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int maxn = 101000;
ll sum[maxn<<2];
ll add[maxn<<2];
ll a[maxn];
void pushup(ll rt)
{
    sum[rt]=sum[rt<<1]+sum[rt<<1|1];
}
void build(ll l,ll r,ll rt)
{
    add[rt]=0;
    if(l==r)
    {
        sum[rt]=a[l];
        return ;
    }
    ll m=(l+r)>>1;
    build(l,m,rt<<1);
    build(m+1,r,rt<<1|1);
    pushup(rt);
}
void pushdown(ll rt,ll ln,ll rn)
{
    if(add[rt])
    {
        add[rt<<1]=add[rt];
        add[rt<<1|1]=add[rt];
        sum[rt<<1]=add[rt]*ln;
        sum[rt<<1|1]=add[rt]*rn;
        add[rt]=0;
    }
}
void update(ll L,ll R,ll C,ll l,ll r,ll rt)
{
    if(L<=l&&R>=r)
    {
        sum[rt]=(ll)C*(r-l+1);
        add[rt]=C;
        return ;
    }
    ll m=(l+r)>>1;
    pushdown(rt,m-l+1,r-m);
    if(L<=m)
        update(L,R,C,l,m,rt<<1);
    if(R>m)
        update(L,R,C,m+1,r,rt<<1|1);
    pushup(rt);
}
ll query(ll L,ll R,ll l,ll r,ll rt)
{
    if(L<=l&&R>=r)
    {
        return sum[rt];
    }
    ll m=(l+r)>>1;
    pushdown(rt,m-l+1,r-m);
    ll ans=0;
    if(L<=m)
        ans+=query(L,R,l,m,rt<<1);
    if(R>m)
        ans+=query(L,R,m+1,r,rt<<1|1);
    return ans;
}


int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    rep(1,t,i)
    {
        int n;
        int m;
        cin>>n>>m;
        rep(1,n,x)
        {
            a[x]=1;
        }
        me(add,0);
        me(sum,0);
        build(1,n,1);
        while(m--)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            update(a,b,c,1,n,1);
        }
        cout<<"Case "<<i<<": "<<"The total value of the hook is "<<query(1,n,1,n,1)<<"."<<endl;
    }
    return 0;
}