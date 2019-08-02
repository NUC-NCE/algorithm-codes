#include<cstdio>
#define N 300
using namespace std;
int a[N+1];
int d[20];
int c[10];
int flag;
int main()
{
    a[0]=0;
    d[0]=0;
    c[0]=0;
    int i,j,B,m,t,t1,t2;
    for(i=1;i<=N;i++)
        a[i]=i*i;
    while(~scanf("%d",&B))
    {
        for(i=1;i<=N;i++)
        {
            t=a[i];j=1;
            while(t!=0)
            {
                d[j]=t%B;
                t/=B;
                j++;
            }
            m=1;
            t1=--j;
            flag=0;
            while(m<j)
                if(d[m++]!=d[j--])
                {
                    flag=1;
                    break;
                }
            if(flag==1)
            {
                continue;
            }
            j=1;
            t=i;
            while(t)
            {
                c[j]=t%B;
                t/=B;
                j++;
            }
            t2=--j;
            for(j=t2;j>0;j--)
            {
                t=c[j]/10;
                if(t)
                    printf("%c",c[j]%10+'A');
                else
                    printf("%d",c[j]);
            }
            printf(" ");
            for(j=t1;j>0;j--)
            {
                t=d[j]/10;
                if(t)
                    printf("%c",d[j]%10+'A');
                else
                    printf("%d",d[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
