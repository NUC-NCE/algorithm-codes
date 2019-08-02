#include<stdio.h>
const int d=3;
int main()
{
	long long n;
	while(~scanf("%lld",&n))
	{
		while(n%3==0)
		{
			n/=3;
		}
		printf("%lld\n",n/3+1);
	}
}