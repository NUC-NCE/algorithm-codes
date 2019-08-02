#include<iostream>
#include<cstdio>
using namespace std;
long long a[200005];
int main()
{
	int t,i,j;
	scanf("%d",&t);
	while(t--)
	{
		long long p=0;
		int n,k,m;
		scanf("%d %d %d",&n,&m,&k);
		for(i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
		}
		int end=0;
		int cnt=0;
		for(i=1;i<=n;i++)
		{
			while(cnt<k&&end<n)
			{
				end++;
				cnt+=(a[end]>=m);
			}
			if(cnt<k)
				break;
			p=p+n-end+1;
			cnt-=(a[i]>=m);
		}
		printf("%lld\n",p);
	}
	return 0;
}