#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int n,m;
int a[105];
int x[105];
int c[105][105];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        memset(a,0,sizeof(a));
        memset(x,0,sizeof(x));
        memset(c,0,sizeof(c));
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                for(int k=j;k<=j+i;k++)
                {
                    c[i][j]=c[i][j]^a[k];
                }
            }
        }
        scanf("%d",&m);
        for(int k=0;k<m;k++)
        {
            scanf("%d",&x[k]);
            int p=2048;
            int l;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n-i;j++)
                {
                    if(abs(x[k]-c[i][j])<p)
                    {
                        p=abs(x[k]-c[i][j]);
                        l=i+1;
                    }
                    if(i+1>l&&abs(x[k]-c[i][j])==p)
                        l=i+1;
                }
            }
            printf("%d\n",l);
        }
       printf("\n");
    }
    return 0;
}