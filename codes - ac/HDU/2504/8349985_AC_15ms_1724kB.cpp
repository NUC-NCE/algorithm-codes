#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int a,int b)
{
	if(b==0) 	
		return a; 
	return gcd(b,a%b);
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		for(int i=b+b; i<1000000; i=i+b)
			if(gcd(a,i)==b)
			{
				printf("%d\n",i);
				break;
			}
	}
	return 0;
}