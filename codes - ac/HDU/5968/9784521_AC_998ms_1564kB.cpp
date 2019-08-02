#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
using namespace std;
int a[102],x[102];
int b[102][102];
int main()
{
    int i,j,t,n,k,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        memset(b,0,sizeof(b));
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                for(k=j; k<=j+i; k++)
                b[i][j]=b[i][j]^a[k];
            }
        }
        scanf("%d",&m);
        int len;
        for(k=0; k<m; k++)
        {
            int minn=100000000;
            scanf("%d",&x[k]);
            for(i=0;i<n;i++)
            {
                for(j=0;j<n-i;j++)
                {
                    if(abs(b[i][j]-x[k])<minn)
                    {
                        minn=abs(b[i][j]-x[k]);
                        len=i+1;
                    }
                    if(i+1>len&&abs(b[i][j]-x[k])==minn)
                        len=i+1;
                }
            }
            printf("%d\n",len);
        }
    printf("\n");
    }
    return 0;
}
