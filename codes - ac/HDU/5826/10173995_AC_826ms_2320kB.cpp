#include"stdio.h"
#include"cstdio"
#include"string.h"
#include"algorithm"
#include"map"
#include"math.h"
using namespace std;
const int max_n=1e6+10;
typedef long long ll;
ll V[max_n]; 
int main()
{
	int T;
	
	while(scanf("%d",&T)!=EOF)
	{
		while(T--)
		{
			ll i,n,c;
			scanf("%lld%lld",&n,&c);
			for(i=0;i<n;i++)
			{
				ll b,c;
				scanf("%lld%lld%lld",&V[i],&b,&c);
			}
			sort(V,V+n);
			ll q;
			scanf("%lld",&q);
			for(i=0;i<q;i++)
			{
				ll t,k;
				double ret;
				scanf("%lld%lld",&t,&k);
				ret=sqrt((double)(fabs(V[k-1]*V[k-1]*1.0+2.0*abs(c)*t)));
				printf("%.3llf\n",ret);
			}
		}
	}
}