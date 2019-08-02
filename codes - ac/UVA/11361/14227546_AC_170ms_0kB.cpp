#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

typedef long long LL;

LL Dp[11][110][110];

int Po[11];

void Break(LL n)
{
    Po[0] = 0;

    stack<int>ST;

    while(n)
    {
        ST.push(n%10);

        n /= 10;
    }

    while(!ST.empty())
    {
        Po[++Po[0]] = ST.top();

        ST.pop();
    }
}

LL Opera(LL n , LL m)
{
    memset(Dp,0,sizeof(Dp));

    Break(n);

    LL ans =0 ,ant = 0;

    for(int i = 1;i<=Po[0];i++)
    {
        for(int j = 0;j<m;j++)
        {
            for(int k = 0;k<m;k++)
            {
                for(int s = 0;s<=9;s++)
                {
                    Dp[i][(j+s)%m][(k*10+s)%m]+=Dp[i-1][j][k];
                }
            }
        }

        for(int j = 0;j<Po[i];j++)
        {
            Dp[i][(ans+j)%m][(ant*10+j)%m]++;
        }

        ans = (ans+Po[i])%m;

        ant = (ant*10+Po[i])%m;
    }

    if(ans==0&&ant==0)
    {
        Dp[Po[0]][0][0]++;
    }

    return Dp[Po[0]][0][0];

}

int main()
{
    LL n,m,k;

    int T;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%lld %lld %lld",&n,&m,&k);

        if(k>=100)
        {
            printf("0\n");
        }
        else
        {
            printf("%lld\n",Opera(m,k)-Opera(n-1,k));
        }
    }

}