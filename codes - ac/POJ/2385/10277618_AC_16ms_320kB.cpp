#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int a[1010];
int dp[1005][35];
int len1,len2;
int main()
{
    int n,w;
    while(~scanf("%d%d",&n,&w))
    {
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        int ans=0;
        for(int i=1;i<=n;i++)
            for(int j=0;j<=w;j++)
            {
                if(j==0)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=max(dp[i-1][j-1],dp[i-1][j]);
                if(j%2+1==a[i])
                    dp[i][j]+=1;
                ans=max(ans,dp[i][j]);
            }
        printf("%d\n",ans);
    }
    return 0;
}