#include<cstdio>
using namespace std;
int q[100005];
int main()
{
	int n,i;
	scanf("%d",&n);
	int a=0,b=0,c=0,d=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&q[i]);
		if(q[i]==4)
			a++;
		if(q[i]==3)
			b++;
		if(q[i]==2)
			c++;
		if(q[i]==1)
			d++;
	}
	if(b>=d)
	{
		printf("%d\n",a+b+(c+1)/2);
	}
	if(b<d)
	{
		if(c%2==0)
		{
			if((d-b)%4==0)
				printf("%d\n",a+b+c/2+(d-b)/4);
			else
				printf("%d\n",a+b+c/2+(d-b)/4+1);
		}
		if(c%2==1)
		{
			if((d-b)%4==0)
				printf("%d\n",a+b+c/2+1+(d-b)/4);
			else
			{
				if((d-b)%4<=2)
					printf("%d\n",a+b+c/2+1+(d-b)/4);
				else
					printf("%d\n",a+b+c/2+1+(d-b)/4+1);
			}
		}
	}
	return 0;
}