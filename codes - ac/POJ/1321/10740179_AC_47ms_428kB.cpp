#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=10;
int cnt,n,k;
char MAP[maxn][maxn];
bool vis[maxn];
void dfs(int x,int cur)
{
    if(cur==k)
    {
        cnt++;
        return;
    }
    else
    {
         for(int i=x;i<n;i++)
            for(int j=0;j<n;j++)
            if(MAP[i][j]=='#'&&!vis[j])
            {
                 vis[j]=1;
                 dfs(i+1,cur+1);
                 vis[j]=0;
            }
    }
}
int main()
{
    int i,j;
    while(scanf("%d%d",&n,&k)==2)
    {
         if(n==-1&&k==-1)
            return 0;
         for(i=0;i<n;i++)
         {
             getchar();
             for(j=0;j<n;j++)
                MAP[i][j]=getchar();
         }
         cnt=0;
         memset(vis,0,sizeof(vis));
         dfs(0,0);
         printf("%d\n",cnt);
    }
    return 0;
}
