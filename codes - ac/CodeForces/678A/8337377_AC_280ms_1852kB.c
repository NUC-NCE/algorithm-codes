#include<stdio.h>
int main()
{
	int d,k;
	while(~scanf("%d %d",&d,&k))
	{
		int n=d+1;
		int i=2;
		if(d<k)
			printf("%d\n",k);
		else
		{
			while(i*k<n)
			{
				i++;
			}
			printf("%d\n",i*k);
		}
	}
	return 0;
}