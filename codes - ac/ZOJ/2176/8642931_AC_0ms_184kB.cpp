#include<cstdio>
#include<cstring>
using namespace std;
int a[11];
int b[11];
int n;
int main()
{
    while(~scanf("%d",&n)&&n!=-1)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        int i;
        for(i=0;i<n;i++)
            scanf("%d %d",&a[i],&b[i]);
        int sum=a[0]*b[0];
        for(i=1;i<n;i++)
            sum+=a[i]*(b[i]-b[i-1]);
        printf("%d miles\n",sum);
    }
    return 0;
}


