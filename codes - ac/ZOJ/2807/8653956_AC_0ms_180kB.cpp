#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
int a[11];
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        memset(a,0,sizeof(a));
        int m;
        scanf("%d",&m);
        int sum=0;
        int i;
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        printf("%d\n",sum-m+1);
    }
    return 0;
}
