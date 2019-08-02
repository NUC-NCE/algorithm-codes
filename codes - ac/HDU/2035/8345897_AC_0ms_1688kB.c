#include<stdio.h>
int main()
{
	int a,b;
	while(~scanf("%d %d",&a,&b))
	{
		if(a==0&&b==0)
			break;
		int c=b,d=1;;
		while(c--)
		{
			d=(a*d)%1000;
		}
		printf("%d\n",d);
	}
	return 0;
}