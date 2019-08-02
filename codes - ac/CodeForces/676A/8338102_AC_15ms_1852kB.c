#include<stdio.h>
#include<string.h>
#include<math.h>
int max(int a,int b)
{
	return a>b?a:b;
}
int a[105];
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		memset(a,sizeof(a),0);
		int p;
		int q;
		int d1,d2,d3,d4;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]==n)
				p=i+1;
			if(a[i]==1)
				q=i+1;
		}
		d1=fabs(p-1);
		d2=fabs(n-p);
		d3=fabs(q-1);
		d4=fabs(n-q);
		int s=max(d1,d2);
		s=max(s,d3);
		s=max(s,d4);
		printf("%d\n",s);
	}
	return 0;
 }