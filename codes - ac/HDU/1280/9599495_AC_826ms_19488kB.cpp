#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
using namespace std;
int cmp(const void *a,const void*b)
{
    return (*(int *)b-*(int *)a);
}
int n,m;
int a[3005];
int b[10000000];
int main()
{
    while(~scanf("%d%d",&n,&m))
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int k=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                b[k]=a[i]+a[j];
                k++;
            }
        }
        qsort(b,k,sizeof(a[0]),cmp);
        for(int i=0;i<m;i++)
        {
            printf("%d",b[i]);
            if(i!=m-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
