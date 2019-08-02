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
const int maxn=2e5+100;
int sum[maxn<<2];
int add[maxn<<2];
int a[maxn];
void pushup(int rt) //函数更新节点信息
{
    sum[rt]=max(sum[rt<<1],sum[rt<<1|1]);
}
void build(int l,int r,int rt) //rt表示当前节点的编号
{
    if(l==r)
    {
        sum[rt]=a[l];
        return ;
    }
    int m=(l+r)>>1;
    build(l,m,rt<<1);
    build(m+1,r,rt<<1|1);
    pushup(rt);
}
void update(int L,int C,int l,int r,int rt)
{
    if(l==r)
    {
        sum[rt]=C;
        return ;
    }
    int m=(l+r)>>1;
    if(L<=m)
        update(L,C,l,m,rt<<1);
    else
        update(L,C,m+1,r,rt<<1|1);

    pushup(rt);
}
/*
void pushdown(int rt,int ln,int rn) //下推标记的函数
{
    if(add[rt])
    {
        add[rt<<1]+=add[rt];
        add[rt<<1|1]+=add[rt];
        sum[rt<<1]+=add[rt]*ln;
        sum[rt<<1|1]+=add[rt]*rn;
        add[rt]=0;
    }
}*/
int query(int L,int R,int l,int r,int rt)
{
    if(L<=l&&r<=R)
    {
        return sum[rt];
    }
    int m=(l+r)>>1;
    //pushdown(rt,m-l+1,r-m);
    int ans=0;
    if(L<=m)
        ans=max(ans,query(L,R,l,m,rt<<1));
    if(R>m)
        ans=max(ans,query(L,R,m+1,r,rt<<1|1));
    return ans;
}

int main()
{
    int n,m;
    ios::sync_with_stdio(false);
    while(cin>>n>>m)
    {
        rep(1,n,i)
        {
            cin>>a[i];
        }
        build(1,n,1);
        rep(1,m,i)
        {
            char x[5];
            int a,b;
            cin>>x>>a>>b;
            if(x[0]=='U')
                update(a,b,1,n,1);
            else
                cout<<query(a,b,1,n,1)<<endl;
        }
    }
    return 0;
}