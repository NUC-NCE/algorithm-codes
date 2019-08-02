#include<cstdio>
using namespace std;
long long n,m;
int main()
{
	int t;
	scanf("%d",&t);
	int i=1,ans;
	while(t--)
	{
		ans=0;
		scanf("%lld%lld",&n,&m);
		while(n>m)
		{
			n-=(n-1)/2;
			ans++;
 		}
 		printf("Case %d: %d\n",i++,ans);
	}
	return 0;
}