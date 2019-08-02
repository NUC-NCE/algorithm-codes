#include<stdio.h>
#include<string.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	while(~scanf("%lld",&n))
	{
		ll i=1;
		ll sum;
		for(i=1;i*i<=n;i++)sum=i;
		printf("%lld\n",n-sum);
	}
}