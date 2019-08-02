#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int a[105];
int b[105];
int cmp(const void *a, const void *b)
{
return(*(int *)a-*(int *)b);
}
int main()
{
    int n,i,j,t;
    while(~scanf("%d",&n)&&n)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        qsort(a,n,sizeof(a[0]),cmp);
        qsort(b,n,sizeof(b[0]),cmp);
        int x=0,y=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>b[i])
                x+=2;
            else if(a[i]==b[i])
            {
                x+=1;
                y+=1;
            }
            else if(a[i]<b[i])
                y+=2;
        }
        printf("%d vs %d\n",x,y);
    }
    return 0;
}
