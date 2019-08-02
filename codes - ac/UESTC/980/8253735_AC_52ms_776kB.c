#include<stdio.h>
int main()
{
	int a,b;
	int n;
	int p;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&a,&b);
		p=a<b?a:b;
		for(p;p>0;p--)
		{
			if(a%p==0&&b%p==0)
				break;
		}
		printf("%d %d\n",p,(a*b)/p);
	}
	return 0;
 } 