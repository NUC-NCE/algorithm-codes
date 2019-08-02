#include<cstdio>
#include<cstring>
using namespace std;
int dp[100010];
int l,s,t,n;
int main()
{
    while(~scanf("%d%d%d%d",&l,&s,&t,&n)&&n)
    {
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)
        {
            int temp;
            scanf("%d",&temp);
            dp[temp]=1;
        }
        for(int i=l-t; i>=0;i--)
        {
            int temp=dp[i+s];
            for(int j=s+1;j<=t;j++)
            {
                if(dp[i+j]<temp)
                    temp=dp[i+j];
            }
           dp[i]+=temp;
        }
        printf("%d\n",dp[0]);
    }
    return 0;
}