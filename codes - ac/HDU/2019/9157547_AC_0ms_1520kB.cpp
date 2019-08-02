#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
using namespace std;
int n,m;
int a[105];
int cmp(const void *a,const void*b)
{
return(*(int *)a-*(int*)b);
}
int main()
{
    while(~scanf("%d %d",&n,&m)&&n&&m)
    {
        a[n]=m;
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        qsort(a,n+1,sizeof(a[0]),cmp);
        for(int i=0;i<=n;i++)
        {
            printf("%d",a[i]);
            if(i!=n)
                printf(" ");
            else
                printf("\n");
        }
        memset(a,0,sizeof(a));
    }
    return 0;
}

