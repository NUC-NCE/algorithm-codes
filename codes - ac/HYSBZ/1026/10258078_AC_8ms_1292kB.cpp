#include<bits/stdc++.h>
using namespace std;
int num[100];
long long dp[20][10][2];
long long dfs(int i,int d,bool preAllZero,bool isQuery)
{
    if(!isQuery&&~dp[i][d][preAllZero]) 
        return dp[i][d][preAllZero];
    if(i==1) 
    {
        return dp[i][d][preAllZero]=1;
    }
    int end = isQuery?num[i-1]:9;
    long long ans = 0;
    for (int j=0;j<=end;j++)
    {
        if(!preAllZero&&abs(j-d)<=1) 
            continue;
        ans+= dfs(i-1,j,preAllZero&&j ==0,isQuery&&j==end);
    }
    if (!isQuery) 
        dp[i][d][preAllZero]=ans;
    return ans;
}

long long cal(int x)
{
    int len=0;
    while(x)
    {
        num[++len]=x%10;
        x/=10;
    }
    return dfs(len+1,0,true,true);
}

int main()
{
    int a,b;
    memset(dp,-1,sizeof(dp));
    while (~scanf("%d%d",&a,&b))
    {
        printf("%lld\n",cal(b)-cal(a-1));
    }
    return 0;
}