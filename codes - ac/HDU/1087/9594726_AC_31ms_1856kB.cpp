#include<cstdio>
using namespace std;
int n;
int a[1010];
int dp[1010];
int main()
{
    while(~scanf("%d",&n)&&n)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            dp[i]=a[i];
        }
        int sum=0;
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<j;i++)
            {
                if(a[j]>a[i])
                {
                    if(dp[j]<dp[i]+a[j])
                        dp[j]=dp[i]+a[j];
                }
            }
            if(sum<dp[j])
                sum=dp[j];
        }
        printf("%d\n",sum);
    }
    return 0;
}
