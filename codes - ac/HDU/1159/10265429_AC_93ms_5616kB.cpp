#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int i,j;
int main()
{
    char s[1005],t[1005];
    while(~scanf("%s %s",s,t))
    {
        int n,m;
        n=strlen(s);
        m=strlen(t);
        memset(dp,0,sizeof(dp));
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                if(s[i]==t[j])
                    dp[i+1][j+1]=dp[i][j]+1;
                else
                    dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
        printf("%d\n",dp[n][m]);
    }
    return 0;
}