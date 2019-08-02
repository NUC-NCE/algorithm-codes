#include<iostream>
#include<cstring>
#include<cstdlib>
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
const int maxn=1e5+100;
ll sum[maxn<<2];
ll add[maxn<<2];
ll a[maxn];
void pushup(ll rt) //函数更新节点信息
{
    sum[rt]=sum[rt<<1]+sum[rt<<1|1];
}
void build(ll l,ll r,ll rt) //rt表示当前节点的编号
{
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
void pushdown(ll rt,ll ln,ll rn) //下推标记的函数
{
    if(add[rt])
    {
        add[rt<<1]+=add[rt];
        add[rt<<1|1]+=add[rt];
        sum[rt<<1]+=add[rt]*ln;
        sum[rt<<1|1]+=add[rt]*rn;
        add[rt]=0;
    }
}
void update(ll L,ll R,ll C,ll l,ll r,ll rt)
{
    if(L<=l&&r<=R)
    {
        sum[rt]+=C*(r-l+1);
        add[rt]+=C;
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
    if(L<=l&&r<=R)
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
    int n,m;
    me(add,0);
    while(cin>>n>>m)
    {
        rep(1,n,i)
        cin>>a[i];
        build(1,n,1);
        char s[10];
        while(m--)
        {
            cin>>s;
            if(s[0]=='Q')
            {
                ll a,b;
                cin>>a>>b;
                cout<<query(a,b,1,n,1)<<endl;
            }
            else
            {
                ll a,b,c;
                cin>>a>>b>>c;
                update(a,b,c,1,n,1);
            }
        }
    }
    return 0;
}