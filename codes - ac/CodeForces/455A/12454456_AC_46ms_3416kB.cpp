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
ll a[100005],dp[100005];
int main()
{
	int n,i,m;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	memset(dp,0,sizeof(dp));
	while(n--)
	{
		scanf("%d",&m);
		a[m]++;
	}
	dp[1]=a[1];
	for(i=2;i<100003;i++)
		dp[i]=max(dp[i-1],dp[i-2]+a[i]*i);
	printf("%lld",dp[100002]);
	return 0;
}