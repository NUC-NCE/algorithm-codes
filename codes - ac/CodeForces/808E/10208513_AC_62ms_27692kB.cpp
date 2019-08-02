#include"stdio.h"
#include"cstdio"
#include"string.h"
#include"algorithm"
using namespace std;
typedef long long ll;
const int max_n=3*(1e5)+10;
ll num[4][max_n];
ll numm[4],ss[4][max_n];
struct DP
{
	ll val;
	ll s1,s2;
}dp[max_n];
int cmp(ll a,ll b)
{
	return a>b;
}
ll max__(ll x,ll y)
{
	if(x>y)
	return x;
	return y;
}
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		int i;
		numm[1]=numm[2]=numm[3]=0;
		memset(num,0,sizeof(num));
		memset(ss,0,sizeof(ss));
		for(i=0;i<n;i++)
		{
			ll val,w;
			scanf("%lld%lld",&w,&val);
			num[w][++numm[w]]=val;
		}
		for(i=1;i<=3;i++)
		{
			sort(num[i]+1,num[i]+numm[i]+1,cmp);
			for(int j=1;j<=numm[i];j++)
			ss[i][j]=ss[i][j-1]+num[i][j];	
		}
		dp[0].val=0;dp[0].s1=0;dp[0].s2=0;
		for(i=1;i<=m;i++)
		{
			dp[i]=dp[i-1];
			if(dp[i-1].val+num[1][dp[i-1].s1+1]>dp[i].val)
			{
				dp[i].val=dp[i-1].val+num[1][dp[i-1].s1+1];
				dp[i].s1=dp[i-1].s1+1;
				dp[i].s2=dp[i-1].s2;
			}
			if(i>=2&&dp[i-2].val+num[2][dp[i-2].s2+1]>dp[i].val)
			{
				dp[i].val=dp[i-2].val+num[2][dp[i-2].s2+1];
				dp[i].s1=dp[i-2].s1;
				dp[i].s2=dp[i-2].s2+1;
			}
		}
		ll ret=0;
		for(i=0;i<=numm[3];i++)
		{
			if(i*3<=m)
			ret=max__(ss[3][i]+dp[m-3*i].val,ret);
		}
		printf("%lld\n",ret);
	}
}