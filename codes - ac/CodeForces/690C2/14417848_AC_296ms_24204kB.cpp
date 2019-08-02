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
typedef long long ll;
using namespace std;
const int MAXN=1e6+100;
int head[MAXN],dis[MAXN];
struct node
{
    int to;
    int next;
    int dis;
}edge[MAXN];
int num;
void add(int u,int v)
{
    edge[num].to=v;
    edge[num].dis=1;
    edge[num].next=head[u];
    head[u]=num++;
}
void dfs(int f,int u,int d)
{
    dis[u]=d;
    for(int i=head[u];i!=-1;i=edge[i].next)
        if(edge[i].to!=f)
            dfs(u,edge[i].to,d+edge[i].dis);
}
int main()
{
    int n,m;
    while(cin>>n>>m){
        me(head,-1);
        num=0;
        while(m--){
            int u,v;
            cin>>u>>v;
            add(u,v);
            add(v,u);
        }
        dfs(0,1,0);
        int maxn=-1;
        int tag;
        rep(1,n,i)
            if(dis[i]>maxn)
                maxn=dis[i],tag=i;
        dfs(0,tag,0);
        maxn=-1;
        rep(1,n,i)
            if(dis[i]>maxn)
                maxn=dis[i];
        cout<<maxn<<endl;
    }
    return 0;
}


/*
int dp[2][5000];
int main()
{
    int n, p;
    while(cin>>n>>p){
        dp[1][1]=1;
        int x=1,y=0;
        for(int i=2;i<=n;i++){
            x=max(x-1,1-x);
            y=max(y-1,1-y);
            for(int j=1;j<=i;j++)
                dp[x][j]=(dp[x][j-1]+dp[y][i-j])%p
                ;
        }
        cout<<((dp[x][n]+1)/2)%p<<endl;
    }
    return 0;
}*/

