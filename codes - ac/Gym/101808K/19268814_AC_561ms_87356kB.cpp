#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=500010;
int n,m,q,tot,tot2,cnt,tmp,ans;
int f[maxn][30];
int head[maxn];
ll dis[maxn];
int dfn[maxn],d[maxn];
int dep[maxn],e[maxn],pos[maxn];
bool vis[maxn];
struct node
{
    int to,nex;
    ll w;
}a[maxn];
void add(int u,int v,ll w)
{
    a[cnt].to=v;
    a[cnt].w=w;
    a[cnt].nex=head[u];
    head[u]=cnt++;
}
void init()
{
    cnt=tot=tot2=0;
    memset(head,-1,sizeof(head));
    memset(pos,-1,sizeof(pos));
    memset(vis,0,sizeof(vis));
    dis[1]=0;
}
void dfs(int u,int deep)//1
{
    if(pos[u]!=-1)return;
    dfn[tot2]=u;d[u]=tot2++;
    pos[u]=tot;e[tot]=u;dep[tot++]=deep;
    for(int i=head[u];i!=-1;i=a[i].nex)
    {
        int v=a[i].to;
        if(pos[v]==-1)
        {
            dis[v]=dis[u]+a[i].w;
            dfs(v,deep+1);
            e[tot]=u;dep[tot++]=deep;
        }
    }
}
void rmq(int n)
{
    for(int i=1;i<=n;i++)f[i][0]=i;
    for(int j=1;(1<<j)<=n;j++)
    for(int i=1;i+(1<<j)-1<=n;i++)
    {
        if(dep[f[i][j-1]]<dep[f[i+(1<<(j-1))][j-1]]) f[i][j]=f[i][j-1];
        else f[i][j]=f[i+(1<<(j-1))][j-1];
    }
}
int RMQ(int l,int r)
{
    int k=(int)(log((double)(r-l+1))/log(2.0));
    if(dep[f[l][k]]<dep[f[r-(1<<k)+1][k]]) return f[l][k];
    else return f[r-(1<<k)+1][k];
}
int lca(int x,int y)
{
    if(pos[x]<pos[y]) return e[RMQ(pos[x],pos[y])];
    else return e[RMQ(pos[y],pos[x])];
}
ll cal(int x,int y)
{
    return dis[x]+dis[y]-2*dis[lca(x,y)];
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        init();
        scanf("%d %d",&n,&q);
        for(int i=0;i<n-1;i++)
        {
            int x,y;ll z;
            scanf("%d%d%lld",&x,&y,&z);
            add(x,y,z);
            add(y,x,z);
        }
        int X,Y;ll Z;
        scanf("%d%d%lld",&X,&Y,&Z);
        dfs(1,0);
        rmq(2*n-1);
        ll ans=0;
        while(q--)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            ans=cal(u,v);
            ans=min(ans,cal(u,X)+cal(v,Y)+Z);
            ans=min(ans,cal(u,Y)+cal(v,X)+Z);
            printf("%lld\n",ans);
        }
    }
    return 0;
}

