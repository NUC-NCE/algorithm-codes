#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
long long a[100005],dp[100005];
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
