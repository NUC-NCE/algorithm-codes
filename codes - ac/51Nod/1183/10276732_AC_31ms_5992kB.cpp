#include<bits/stdc++.h>
using namespace std;
char s1[1005],s2[1005];
int dp[1005][1005];
int len1,len2;
int main()
{
    while(~scanf("%s%s",s1,s2))
    {
        len1=strlen(s1);
        len2=strlen(s2);
        int i,j;
        for(i=0;i<=len1;i++)
            dp[i][0]=i;
        for(j=0;j<=len2;j++)
            dp[0][j]=j;
        for(i=1;i<=len1;i++)
        {
            for(j=1;j<=len2;j++)
            {
                int cost=1;
                if(s1[i-1]==s2[j-1])
                    cost=0;
                int del=dp[i-1][j]+1;
                int ins=dp[i][j-1]+1;
                int sub=dp[i-1][j-1]+cost;
                dp[i][j]=min(min(del,ins),sub);
            }
        }
        printf("%d\n",dp[len1][len2]);
    }
    return 0;
}
