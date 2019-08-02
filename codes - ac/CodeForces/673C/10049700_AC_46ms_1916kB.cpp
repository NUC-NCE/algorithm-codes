#include<stdio.h>
#include<string.h>
using namespace std;
int a[5005];
int vis[5005];
int ans[5005];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        memset(vis,0,sizeof(vis));
        memset(ans,0,sizeof(ans));
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=1;i<=n;i++)
        {
            int maxn=0;
            int color=-1;
            memset(vis,0,sizeof(vis));
            for(int j=i;j<=n;j++)
            {
                vis[a[j]]++;
                if(vis[a[j]]>maxn)maxn=vis[a[j]],color=a[j];
                if(vis[a[j]]==maxn)
                {
                    if(a[j]<color)color=a[j];
                }
                ans[color]++;
            }
        }
        for(int i=1;i<=n;i++)printf("%d ",ans[i]);
    }
}