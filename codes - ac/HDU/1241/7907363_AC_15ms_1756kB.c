#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char a[100][100];
int b[100][100];
int n,m;
int jx[8]={-1,-1,0,1,1,1,0,-1};
int jy[8]={0,1,1,1,0,-1,-1,-1};

void dfs(int x,int y)
{
    int i;
    for(i=0;i<8;i++)
    {
        int dx=x+jx[i];
        int dy=y+jy[i];
        if(dx>=0&&dx<n&&dy>=0&&dy<m&&a[dx][dy]=='@'&&!b[dx][dy])
        {
            b[dx][dy]=1;dfs(dx,dy);
        }
    }
}

int main()
{
    int i,j;
    int k;
    while(~scanf("%d %d",&n,&m))
    {
        if(n==0&&m==0) break;
        memset(b,0,sizeof(b));
        for(i=0;i<n;i++)
            scanf("%s",a[i]);
        k=0;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
        if(a[i][j]=='@'&&!b[i][j])
        {
            k++;
            dfs(i,j);
        }
        printf("%d\n",k);
    }
    return 0;
}