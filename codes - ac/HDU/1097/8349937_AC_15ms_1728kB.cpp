#include<iostream>
#include<cstdio>
using namespace std;
int quickpow(long long m,long long n,long long k)
{
    int b = 1;
    while (n > 0)
    {
          if (n & 1)
             b = (b*m)%k;
          n = n >>= 1 ;
          m = (m*m)%k;
    }
    while(b>10)
    	b=b%10;
    return b;
} 
int main()
{
	long long a,b;
	while(~scanf("%lld %lld",&a,&b))
	{
		long long k=10;
		long long s=quickpow(a,b,k);
		printf("%lld\n",s);
	}
	return 0;
}