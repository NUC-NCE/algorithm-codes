#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
using namespace std;
int a[102],b[102];
int c[102][102];
int main()
{
    int i,j,t,n,k,m;
    scanf("%d",&t);
    while(t--)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        memset(c,0,sizeof(c));
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-i; j++)
            {
                for(k=j; k<=j+i; k++)
                c[i][j]=c[i][j]^a[k];
            }
        }
        scanf("%d",&m);
        int l;
        for(k=0; k<m; k++)
        {
            int minn=100000000;
            scanf("%d",&b[k]);
            for(i=0; i<n; i++)
            {
                for(j=0; j<n-i; j++)
                {
                    if(abs(c[i][j]-b[k])<minn)
                    {
                        minn=abs(c[i][j]-b[k]);
                        l=i+1;
                    }
                    if(i+1>l&&abs(c[i][j]-b[k])==minn)
                        l=i+1;
                }
            }
            printf("%d\n",l);
        }
    printf("\n");
    }
    return 0;
}