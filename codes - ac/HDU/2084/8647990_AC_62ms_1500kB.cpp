#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
int dp[105][105];
int a[105][105];
int main()
{
    int c;
    scanf("%d",&c);
    while(c--)
    {
        memset(dp,0,sizeof(dp));
        memset(a,0,sizeof(a));
        int n;
        scanf("%d",&n);
        int i,j;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
                scanf("%d",&a[i][j]);
        }
        for(j=1;j<=n;j++)
            dp[n][j]=a[n][j];
        for(i=n-1;i>=1;i--)
        {
            for(j=1;j<=i;j++)
                dp[i][j]=a[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
        }
        printf("%d\n",dp[1][1]);
    }
    return 0;
}