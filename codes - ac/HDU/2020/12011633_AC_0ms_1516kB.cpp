#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int a[105];
bool cmp(int x,int y)
{
  return abs(x) > abs(y);
}
int main()
{
    int n,i,j,t;
    while(~scanf("%d",&n)&&n)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n,cmp);
        for(i=0;i<n-1;i++)
            printf("%d ",a[i]);
        printf("%d\n",a[i]);
    }
    return 0;
}