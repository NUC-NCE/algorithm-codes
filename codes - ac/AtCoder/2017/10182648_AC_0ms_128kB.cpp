#include"stdio.h"
#include"cstdio"
#include"algorithm"
#include"string.h"
using namespace std;
typedef long long ll; 
int main()
{
	ll n;
	while(scanf("%d",&n)!=EOF)
	{
		ll ret=(n+1)*n/2;
		printf("%lld\n",ret);
	}
} 