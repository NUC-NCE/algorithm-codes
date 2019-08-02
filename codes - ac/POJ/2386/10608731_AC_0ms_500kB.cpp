#include<cstdio>
#include<cstring>
using namespace std;
int n,m;
char field[105][105];
void dfs(int x,int y)
{
    field[x][y]='.';
    for(int dx=-1;dx<=1;dx++)
        for(int dy=-1;dy<=1;dy++)
        {
            int nx=x+dx,ny=y+dy;
            if(0<=nx&&nx<n&&0<=ny&&ny<m&&field[nx][ny]=='W')
                dfs(nx,ny);
        }
    return ;
}
void solve()
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(field[i][j]=='W')
            {
                dfs(i,j);
                res++;
            }
        }
    }
    printf("%d\n",res);
}
int main()
{
    while(~scanf("%d%d",&n,&m))
    {
        memset(field,0,sizeof(field));
        for(int i=0;i<n;i++)
            scanf("%s",field[i]);
        solve();
    }
    return 0;
}


