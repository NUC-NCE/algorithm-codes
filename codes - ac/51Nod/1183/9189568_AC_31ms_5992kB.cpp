#include<bits/stdc++.h>
using namespace std;
char s1[1005],s2[1005];
int dp[1005][1005];
int l1,l2;
int main()
{
    while(~scanf("%s%s",s1,s2))
    {
        l1=strlen(s1);
        l2=strlen(s2);
        int i,j;
        for(i=0;i<=l1;i++)
            dp[i][0]=i;
        for(j=0;j<=l2;j++)
            dp[0][j]=j;
        for(i=1;i<=l1;i++)
        {
            for(j=1;j<=l2;j++)
            {
                int cost=s1[i-1]==s2[j-1]?0:1;
                int del=dp[i-1][j]+1;
                int ins=dp[i][j-1]+1;
                int sub=dp[i-1][j-1]+cost;
                dp[i][j]=min(min(del,ins),sub);
            }
        }
        printf("%d\n",dp[l1][l2]);
    }
    return 0;
}
