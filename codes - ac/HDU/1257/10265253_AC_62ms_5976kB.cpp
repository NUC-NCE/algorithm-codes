#include<bits/stdc++.h>
using namespace std;
int n;
int a[100000];
int dp[100000];
int s[1000000];
int main()
{
    while(~scanf("%d",&n)&&n)
    {
        memset(a,0,sizeof(a));
        memset(s,0,sizeof(s));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(a[j]<a[i])
                    dp[i]=max(dp[i],dp[j]+1);
                if(dp[i]<res)
                    s[i]=0;s[j]=0;
                res=max(res,dp[i]);
            }
        }
        printf("%d\n",res);
    }
    return 0;
}