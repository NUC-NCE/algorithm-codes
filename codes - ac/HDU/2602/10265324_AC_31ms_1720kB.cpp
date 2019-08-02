#include<bits/stdc++.h>
using namespace std;
#define MAX_N 10050
int v[MAX_N];
int w[MAX_N];
int t;
int W,n;
int dp[MAX_N+1];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&W);
        for( int i = 0; i < n; i++)
            scanf("%d",&v[i]);
        for( int i = 0; i < n; i++)
            scanf("%d",&w[i]);
        memset(dp,0,sizeof(dp));
        for ( int i = 0; i < n; i++)
            for ( int j = W; j-w[i] >= 0; j--)
                dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        printf("%d\n",dp[W]);
    }
    return 0;
}