#include<cstdio>
#include<cstring>
using namespace std;
int a[11][11];
int main()
{
    int n,m;
    while(~scanf("%d %d",&n,&m))
    {
        if(m==0&&n==0)
            break;
        memset(a,0,sizeof(a));
        int i,j;
        int k=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
                if(a[i][j]==0)
                    k=1;
            }
        }
        if(k==0)
            printf("No\n");
        else
        {
            int flag=1;
            for(i=0;i<n-1;i++)
            {
                for(j=0;j<m-1;j++)
                {
                    if(a[i][j]==0&&a[i+1][j]==0)
                        flag=0;
                    else if(a[i][j]==0&&a[i][j+1]==0)
                        flag=0;
                    else if(a[n-1][j]==0&&a[n-1][j+1]==0)
                        flag=0;
                    if(flag==0)
                        break;
                }
                if(a[i][m-1]==0&&a[i+1][m-1]==0)
                        flag=0;
                if(flag==0)
                    break;
            }
            if(flag==1)
                printf("Yes\n");
            else if(flag==0)
                printf("No\n");
        }
    }
    return 0;
}