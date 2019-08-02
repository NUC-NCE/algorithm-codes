#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
#define INF 0xfffff
const int MAX_N = 105;
int cost[MAX_N][MAX_N];
int d[MAX_N];
int used[MAX_N];
int n,m,i,j;
void dijkstra()
{
    for(int i = 0; i < n; i++)
    {
        int v;
        int l=INF;
        for(int u=1;u<=n;u++)
        {
            if(!used[u]&&d[u]<=l)
                l=d[v=u];
        }
        used[v]=1;
        for(int u = 1;u<=n;u++)
        {
            d[u]=min(d[u],d[v]+cost[v][u]);
        }
    }
}

int main()
{
    int a, b, c;
    while(~scanf("%d%d",&n,&m))
    {
        if(n==0&&m==0) break;
        memset(used, 0, sizeof(used));
        for(int i = 1; i <= n; i++)
            d[i]=(i==1?0:INF);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cost[i][j]=INF;
        for(int i=0;i<m;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            cost[a][b]=cost[b][a]=c;
        }
        dijkstra();
        printf("%d\n",d[n]);
    }
    return 0;
}