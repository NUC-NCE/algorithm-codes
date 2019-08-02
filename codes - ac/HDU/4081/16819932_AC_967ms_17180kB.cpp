#include <cstdio>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <math.h>
#define INF 0x3f3f3f3f
using namespace std;
typedef long long ll;
const int max_n=1e3+10;
float dp[max_n][max_n];
float dis[max_n][max_n];
float pop[max_n];
int num,num1;
int h[max_n];
struct Edge
{
    int u,v;
    float l;
    int next;
    friend bool operator <(Edge a,Edge b)
    {
        return a.l<b.l;
    }
}e[max_n<<1],e1[max_n*max_n];
void add_edge(int u,int v,float l)
{
    e[num].u=u;
    e[num].v=v;
    e[num].l=l;
    e[num].next=h[u];
    h[u]=num++;
}
void dfs(int u,int fa,int root)
{
    for(int i=h[u];~i;i=e[i].next)
    {
        int v=e[i].v;
        if(fa==v) continue;
        if(root!=u) dp[root][v]=max(dp[root][v],dp[root][u]);
        dp[root][v]=max(dp[root][v],e[i].l);
        dfs(v,u,root);
    }
}
struct Point
{
    float x,y;
    Point(float x=0,float y=0):x(x),y(y) {}
}P[max_n];
float Dis(Point a,Point b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int par[max_n];
void init(int n) {for(int i=0;i<n;i++) par[i]=i;}
int find_(int x) {return par[x]==x?x:par[x]=find_(par[x]);}
int unit(int x,int y)
{
    x=find_(x); y=find_(y);
    if(x==y) return 0;
    par[x]=y;
    return 1;
}
float kruskal(int n)
{
    sort(e1,e1+num1);
    init(n);
    float res=0;
    for(int i=0;i<num1;i++)
    {
//        Edge ee=e1[i];
        int u=e1[i].u,v=e1[i].v;
        if(unit(u,v))
        {
            add_edge(u,v,dis[u][v]);
            add_edge(v,u,dis[u][v]);
            res+=dis[u][v];
        }
    }
    return res;
}
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        while(t--)
        {
            int n;
            scanf("%d",&n);
            num=num1=0;
            memset(h,-1,sizeof(h));
            memset(dp,0,sizeof(dp));
            for(int i=0;i<n;i++) scanf("%f%f%f",&P[i].x,&P[i].y,&pop[i]);
            for(int i=0;i<n;i++) for(int j=0;j<=i;j++)
            {
                dis[i][j]=dis[j][i]=Dis(P[i],P[j]);
                e1[num1].u=i;
                e1[num1].v=j;
                e1[num1++].l=dis[i][j];
            }
            float ans=kruskal(n);
            //printf("**%lf %d\n",ans,num1);
            for(int i=0;i<n;i++) dp[i][i]=0,dfs(i,-1,i);
            float ret=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<i;j++)
                {
                    //printf("get: %d %d %lf\n",i,j,dp[i][j]);
                    ret=max(ret,(pop[i]+pop[j])/(ans-dp[i][j]));
                }
            }
            printf("%.2f\n",ret);
        }
    }
    return 0;
}