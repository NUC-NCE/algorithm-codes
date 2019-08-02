#include<bits/stdc++.h>
using namespace std;
char s1[1005],s2[1005];
int d[1005][1005];
int l1,l2;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s%s",s1,s2);
        l1=strlen(s1);
        l2=strlen(s2);
        int i,j;
        for(i=0;i<=l1;i++)
            d[i][0]=i;
        for(j=0;j<=l2;j++)
            d[0][j]=j;
        for(i=1;i<=l1;i++)
        {
            for(j=1;j<=l2;j++)
            {
                int cost=s1[i-1]==s2[j-1]?0:1;
                int deletion=d[i-1][j]+1;
                int insertion=d[i][j-1]+1;
                int substitution=d[i-1][j-1]+cost;
                d[i][j]=min(min(deletion,insertion),substitution);
            }
        }
        printf("%d\n",d[l1][l2]);
    }
    return 0;
}
