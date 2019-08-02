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
#define plf(d) printf("%.6lf\n",d)
#define eps 1e-5
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int maxn=1100;
const int INF=0x3f3f3f3f;
struct Edge
{
    int v;
    int cost;
};
vector<Edge>G[maxn];
int vis[maxn];
int dis[maxn];
int N,M;

int spfa(int n)
{
    me(vis,0);
    rep(1,N,i)
        dis[i]=INF;
    vis[1]=vis[n]=2;
    dis[1]=0;
    queue<int>q;
    while(!q.empty())
        q.pop();
    q.push(1);
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        vis[cur]=0;
        for(int i=0;i<G[cur].size();i++){
            int v=G[cur][i].v;
            if(v==n)
                continue;
            if(dis[v]>dis[cur]+G[cur][i].cost){
                dis[v]=dis[cur]+G[cur][i].cost;
                if(!vis[v]){
                    vis[v]=1;
                    q.push(v);
                }
            }
        }
    }
    return dis[N];
}

int main()
{
    while(~(sd(N),sd(M))&&(N+M))
    {
        rep(0,N,i)
            G[i].clear();
        rep(0,M-1,i){
            int x,y,z;
            sd(x),sd(y),sd(z);
            G[x].push_back((Edge){y,z});
            G[y].push_back((Edge){x,z});
        }

        int maxn=0,ans;
        rep(2,N-1,i){
            ans=spfa(i);
            if(ans==INF)
                break;
            else
                maxn=max(ans,maxn);
        }
        if(ans==INF)
            printf("Inf\n");
        else
            printf("%d\n",maxn);
    }
    return 0;
}
