#include<stdio.h>
#include<string.h>
#include<math.h>
int  s[1001];
int  f[1001];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,a,b;
		memset(s,sizeof(s),0);
		memset(f,sizeof(f),0);
		scanf("%d %d %d",&n,&a,&b);
		int i,j;
		for(i=0;i<n;i++)
		{
			scanf("%d",&s[i]);
		}
		getchar();
		j=0;
		for(i=0;i<n;i++)
		{
			if(s[i]>=a && s[i]<=b)
			{
				f[j]=s[i]; 
				j++;
			}
		}
		float q=0;
		for(i=0;i<j;i++)
		{
			q=q+f[i];
		}
		float z;
		z=q/j;
		float p=0;
		for(i=0;i<j;i++)
		{
			p=p+(f[i]-z)*(f[i]-z);
		}
		p=(sqrt(p))/j;
		printf("%.2f %.2f",z,p);
		if(t!=0)
			printf("\n");
	}
	return 0;
 }