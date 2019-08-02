#include<cstdio>
using namespace std;
int a[810][810],b[810][810],c[810][810],n;
int main()
{
    while(~scanf("%d",&n))
    {
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                scanf("%d",&a[i][j]),a[i][j]%=3,c[i][j]=0;
            }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                scanf("%d",&b[i][j]),b[i][j]%=3;
            }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                if(a[i][j])
                    for(int k=1;k<=n;k++)
                        c[i][k]=(c[i][k]+a[i][j]*b[j][k])%3;
            }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                printf("%d",c[i][j]);
                if(j!=n)
                    printf(" ");
                else
                    printf("\n");
            }
        }
    }
    return 0;
}
