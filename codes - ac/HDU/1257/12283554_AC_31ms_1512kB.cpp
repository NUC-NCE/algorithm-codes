#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int a[1005],dp[1005] = {1};
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for (int i = 0; i < t; i++)
            scanf("%d",&a[i]);
        for (int i = 0; i < t; i++)
            for(int j = i+1; j < t; j++)
            {
                if(a[j] >= a[i])
                    dp[j] = max(dp[i] + 1,dp[j]);
                else
                    dp[j] = max (dp[0],dp[j]);
            }
        int mmm = dp[0];
        for(int i = 1; i < t; i++)
        {
            // printf("%d\n",dp[i]);
            mmm = max(mmm,dp[i]);
        }
        printf("%d\n",mmm);
    }
    return 0;
}
