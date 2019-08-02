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
const int mod=1e9+7;
int dp[1010][1010];
int main()
{
    int n,m;
    sd(n),sd(m);
    rep(0,n-1,i)
        dp[i][0]=1;
    rep(0,m-1,i)
        dp[0][i]=1;
    rep(1,n-1,i){
        rep(1,m-1,j){
            dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
        }
    }
    pd(dp[n-1][m-1]);
	return 0;
}
