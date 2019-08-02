#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

const int maxn=605;
const int INF=0x3f3f3f3f;
int a[maxn][maxn];
int dis[maxn];
bool vis[maxn];
int fa[maxn];
int n,m;
void Dijkstra()
{
    for(int i=1; i<=n; i++)
    {
        dis[i]=a[1][i];
        vis[i]=false;
    }
    dis[1]=0;
    vis[1]=true;
    for(int i=0; i<n; i++)
    {
        int minn=INF;
        int p=-1;
        for(int j=1; j<=n; j++)
        {
            if(!vis[j]&&dis[j]<minn)
                minn=dis[p=j];
        }
        if(p==-1)
            break;
        vis[p]=true;
        for(int j=1; j<=n; j++)
        {
            if(fa[p]==2&&fa[j]==1)
                continue;
            if(!vis[j]&&dis[j]>dis[p]+a[p][j])
                dis[j]=dis[p]+a[p][j];
        }
    }
}

int main()
{
    while(cin>>n,n)
    {
        cin>>m;
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=n; j++)
                if(i==j) a[i][j]=0;
                else a[i][j]=INF;
        }
        int x,y,z;
        while(m--)
        {
            cin>>x>>y>>z;
            a[x][y]=a[y][x]=z;
        }
        for(int i=1; i<=n; i++)
            cin>>fa[i];
        Dijkstra();
        if(dis[2]<INF)
            cout<<dis[2]<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}