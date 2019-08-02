#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int MAXN=1000005;
int fa[MAXN];
int vis[MAXN];
int flag,n,m;

int find(int x)
{
    if(x!=fa[x])
        fa[x]=find(fa[x]);
    return fa[x];
}

void Union(int x,int y)
{
    int fx=find(x),fy=find(y);
    if(fx==fy)
        flag=0;
    else
    {
        if(vis[fx])
            fa[vis[fx]]=fy;
        if(vis[fy])
            fa[vis[fy]]=fx;
        vis[fx]=fy;
        vis[fy]=fx;
    }
}

int main()
{
    int t,cas=1;;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        flag=1;
        for(int i=0;i<=n;i++)
            fa[i]=i,vis[i]=0;
        for(int i=0;i<m;i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            Union(a,b);
        }
        printf("Scenario #%d:\n",cas++);
        if(flag)
            printf("No suspicious bugs found!\n\n");
        else
            printf("Suspicious bugs found!\n\n");
    }
    return 0;
}

