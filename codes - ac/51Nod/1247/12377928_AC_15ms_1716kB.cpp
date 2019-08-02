#include<stdio.h>

long long int gcd(long long int x,long long int y)
{
	if(x%y==0) return y;
	return gcd(y,x%y);
	
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int a,b,c,d;
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		if(gcd(a,b)==gcd(c,d))
            puts("Yes");
        else
            puts("No");
	}
	
	return 0;
}