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
int dp[110]={0,1,2,3};
int main()
{
    for(int i=4;i<=110;i++)
        dp[i]=dp[i-1]+dp[i-3];
    while(sd(n)&&n)
    {
        pd(dp[n]);
    }
    return 0;
}