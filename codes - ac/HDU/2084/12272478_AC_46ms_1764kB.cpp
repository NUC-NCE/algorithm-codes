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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int mod=1e9+7;
int n,t;
int a[110][110];
int dp[110][110];
int main()
{
    sd(t);
    while(t--)
    {
        sd(n);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
                sd(a[i][j]);
        }
        for(int i=1;i<=n;i++)
        {
            dp[n][i]=a[n][i];
        }
        for(int i=n-1; i>=1; i--)
        {
            for(int j=1; j<=i; j++)
                dp[i][j]=a[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
        }
        printf("%d\n",dp[1][1]);
    }
    return 0;
}
