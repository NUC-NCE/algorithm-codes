#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const int mod=1e9+7;

LL dp[2][1 << 10];


int main()
{
    int n, m;
    while(scanf("%d %d", &n, &m)!=EOF)
    {
        if(!(n | m))
        {
            break;
        }
        if((n & 1) && (m & 1))
        {
            printf("0\n");
            continue;
        }
        memset(dp, 0, sizeof(dp));
        if(m > n)
        {
            int t = m;
            m = n;
            n = t;
        }

        int h = 1 << (m - 1);
        dp[0][(1 << m) - 1] = 1;
        int cur = 0;

        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                cur ^= 1;
                memset(dp[cur], 0, sizeof(dp[cur]));
                for(int k = 0; k < (1 << m); ++k)
                {
                    if(k & h) //上面为 1的时候
                    {
                        dp[cur][(k ^ h) << 1] += dp[cur ^ 1][k];

                        if(j && !(k & 1)) //左边为0且不是第一列时，可以填横着的块
                        {
                            dp[cur][((k ^ h) << 1) | 3] += dp[cur ^ 1][k];
                        }
                    }
                    else
                        if(i) //上面为0且不在第一排，只能填竖着的块，不然上面的0永远都没机会填了
                        {
                            dp[cur][((k & (h - 1)) << 1) | 1] += dp[cur ^ 1][k];
                        }
                }
            }
        }
        printf("%lld\n", dp[cur][(1 << m) - 1]);
    }
    return 0;
}
