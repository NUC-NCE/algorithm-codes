#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<climits>
#include<queue>
#include<algorithm>
using namespace std;
const int INF=0x3f3f3f3f;
const int Max=1005;
int map[Max][Max],vis[Max],dis[Max],money[Max],price[Max][Max];
int i,j;
int s,t;
int n,m;
void Dijkstar()
{
    memset(vis,0,sizeof(vis));
    int pos=s;
    vis[pos]=1;
    for(i=1; i<=n; i++)
    {
        dis[i]=map[pos][i];
        money[i]=price[pos][i];
    }
    for(i=0; i<n-1; i++)
    {
        int min=INF;
        for(j=1; j<=n; j++)
        {
            if(vis[j]==0&&dis[j]<min)
            {
                min=dis[j];
                pos=j;
            }
        }
        vis[pos]=1;
        for(j=1; j<=n; j++)
        {
            if(map[pos][j]<INF&&vis[j]==0)
            {
                if(dis[j]>dis[pos]+map[pos][j])
                {
                    dis[j]=dis[pos]+map[pos][j];
                    money[j]=money[pos]+price[pos][j];
                }
                else if(dis[j]==dis[pos]+map[pos][j]&&money[j]>money[pos]+price[pos][j])
                {
                    money[j]=money[pos]+price[pos][j];
                }
            }
        }
    }
}
int main()
{
    while(~scanf("%d%d",&n,&m)&&(n+m))
    {
        int a,b,d,p;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                map[i][j]=INF;
                price[i][j]=INF;
            }
        }
        for(i=1; i<=m; i++)
        {
           scanf("%d%d%d%d",&a,&b,&d,&p);
            if(d<map[a][b])
            {
                map[a][b]=map[b][a]=d;
                price[a][b]=price[b][a]=p;
            }
            else if(d==map[a][b]&&p<price[a][b])
            {
                price[a][b]=price[b][a]=p;
            }
        }
        cin>>s>>t;
        Dijkstar();
        printf("%d %d\n",dis[t],money[t]);
    }
    return 0;
}
