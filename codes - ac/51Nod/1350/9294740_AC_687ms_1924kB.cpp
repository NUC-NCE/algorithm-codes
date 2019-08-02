#include<cstdio>
using namespace std;
typedef long long ll;
ll fib[90],g[90];
//第90个斐波那契数约为3*10^20；
void init()
{
    fib[0]=fib[1]=1;
	g[0]=g[1]=1;
	for(int i=2;i<90;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
		g[i]=g[i-1]+g[i-2]+fib[i-2]-1;
	}
}
ll fibb(ll n)
{
	int res;
	for(int i=0;i<90;i++)
    {
        if(fib[i]>=n)
		{
			res=i;
			break;
		}
    }
	if(fib[res]==n)
		return g[res];
	res--;
	return g[res]+fibb(n-fib[res])+n-fib[res];
}
int  main()
{
	int T,i;
	ll n;
	init();
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld",&n);
		printf("%lld\n",fibb(n));
	}
    return 0;
}
