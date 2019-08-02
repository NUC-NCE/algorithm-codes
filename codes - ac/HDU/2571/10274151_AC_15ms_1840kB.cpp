#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1010][1010];
int dp[1010][1010];
const int INF=-1e9;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                scanf("%d",&a[i][j]),dp[i][j]=INF;
        dp[1][1]=a[1][1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                dp[i+1][j]=max(dp[i+1][j],dp[i][j]+a[i+1][j]);
                dp[i][j+1]=max(dp[i][j+1],dp[i][j]+a[i][j+1]);
                for(int k=2;k*j<=m;k++)
                    dp[i][k*j]=max(dp[i][j*k],dp[i][j]+a[i][j*k]);
            }
        }
        printf("%d\n",dp[n][m]);
    }
    return 0;
}
