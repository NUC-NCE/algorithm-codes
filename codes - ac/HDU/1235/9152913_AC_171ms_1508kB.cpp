#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int n,m;
int a[105];
int main()
{
    while(~scanf("%d",&n)&&n)
    {
        memset(a,0,sizeof(a));
        while(n--)
        {
            int p;
            scanf("%d",&p);
            a[p]++;
        }
        scanf("%d",&m);
        printf("%d\n",a[m]);
    }
    return 0;
}
