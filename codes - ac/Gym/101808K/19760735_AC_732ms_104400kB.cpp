#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=500010;
int n,m,Q,tot,tot2,cnt,tmp,ans;
int f[maxn][30];
int head[maxn];
ll dis[maxn];
int dfn[maxn],d[maxn];
int dep[maxn],e[maxn],pos[maxn];
bool vis[maxn];
int xx[maxn],yy[maxn];
ll zz[maxn];
bool ff[maxn];
queue<int>q;
vector<int>v[maxn];

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
    memset(ff,0,sizeof(ff));
    dis[1]=0;
    while(!q.empty())
        q.pop();
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
struct edge{
    int a,b;
    bool operator <  (const edge &x) const{
        if(x.a!=a)
            return a>x.a;
        return b>x.b;
    }
    edge(int x,int y):a(x),b(y){}
};
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        init();
        scanf("%d %d",&n,&Q);
        int X,Y;
        ll Z;
        set<edge>s;
        s.clear();
        for(int i=1;i<=n;i++)
            v[i].clear();
        for(int i=1;i<=n;i++){
            scanf("%d%d%lld",&xx[i],&yy[i],&zz[i]);
            v[yy[i]].push_back(xx[i]);
            v[xx[i]].push_back(yy[i]);
            s.insert(edge(xx[i],yy[i]));
        }

        ff[1]=1;
        q.push(1);
        int fflag=1;
        while(!q.empty()&&fflag){
            int fa=q.front();
            int len=v[fa].size();
            //cout<<"___________"<<endl;
            if(len)
            {
                for(int i=0;i<len;i++){
                    int son=v[fa][i];
                    if(!ff[son])
                    {
                        //cout<<fa<<"--"<<son<<endl;
                        q.push(son);
                        ff[son]=1;
                        if(s.find(edge(fa,son))!=s.end())
                            s.erase(edge(fa,son));
                        if(s.find(edge(son,fa))!=s.end())
                            s.erase(edge(son,fa));
                    }
                }
            }
            q.pop();
        }
        //cout<<s.size()<<endl;
        set<edge>::iterator it=s.begin();
        X=(*it).a;
        Y=(*it).b;
        for(int i=1;i<=n;i++)
        {
            if(xx[i]!=X||yy[i]!=Y)
            {
                add(xx[i],yy[i],zz[i]);
                add(yy[i],xx[i],zz[i]);
            }
            else
                Z=zz[i];
        }
        //cout<<endl<<X<<" "<<Y<<" "<<Z<<endl;
        dfs(1,0);
        rmq(2*n-1);
        ll ans=0;
        while(Q--)
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