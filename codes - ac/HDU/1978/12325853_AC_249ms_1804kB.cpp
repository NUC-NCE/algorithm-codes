#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d);
#define plld(d) printf("%lld\n",d);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int p[110][110];
ll dp[110][110];
const int mod=1e4;
int n,m;
int main()
{
    int t;
    sd(t);
    while(t--)
    {
        sd(n),sd(m);
        rep(1,n,i){
            rep(1,m,j){
                sd(p[i][j]);
            }
        }
        me(dp,0);
        dp[1][1]=1;
        rep(1,n,i)
        {
            rep(1,m,j)
            {
                dp[i][j]%=mod;
                for(int k=i; k<=p[i][j]+i && k<=n; k++)
                {
                    for(int l=j; l<=p[i][j]+j && l<=m; l++){
                        if(k == i && l == j)
                            continue;
                        if(p[i][j] >= k + l - i - j)
                            dp[k][l] += dp[i][j];
                    }
                }
            }
        }
        plld(dp[n][m]%mod);
    }
    return 0;
}
