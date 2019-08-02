#include<cstdio>
using namespace std;
long gcd(long a,long b)
{
	return (a%b==0)?b:gcd(b,a%b);
}
long lcm(long a,long b)
{
	return a*b/gcd(a,b);
}
int main()
{
	int n;
	long G,L;
	long i,j;
	int flag;
	scanf("%d",&n);
	while (n--)
	{
	scanf("%ld%ld",&G,&L);
	flag=0;
	for(i=G;i<=L;i=i+G)
	{
		for(j=G;j<=L;j=j+G)
		{
			if(lcm(i,j)==L&&gcd(i,j)==G)
			{
				printf("%ld %ld\n",i,j);
				flag=1;
				break;
			}
		}
		if (flag==1) break;
	}
	if(flag==0) 
		printf("-1\n");
	}
	return 0;
}