#include<cstdio>
using namespace std;
int a[810][810],b[810][810],c[810][810],d[810][810],n;
int main()
{
    while(~scanf("%d",&n))
    {
        int flag=1;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                scanf("%d",&a[i][j]),a[i][j],c[i][j]=0;
            }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                scanf("%d",&b[i][j]),b[i][j];
            }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=n;k++)
                    c[i][k]=(c[i][k]+a[i][j]*b[j][k]);
            }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                scanf("%d",&d[i][j]);
            }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(c[i][j]!=d[i][j])
                {
                    flag=0;
                    printf("NO\n");
                    break;
                }
            }
            if(!flag)
                break;
        }
        if(flag)
            printf("YES\n");
    }
    return 0;
}
