#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n;
int a[1005];
int dp[1005];
int main()
{
    while(~scanf("%d",&n)&&n)
    {
        memset(a,0,sizeof(a));
        int sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            dp[i]=a[i];
        }
        int maxn=0;   
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
            if(maxn<dp[j])
                maxn=dp[j];
        }
        printf("%d\n",maxn);
    }
    return 0;
}