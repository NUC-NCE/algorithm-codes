#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int vis[1000100];
int prime[1000000];
int c;
int q[1000010];
void get_prime()
{
	int i,j,n,m;
	c=0;
	n=1000000;
	m=(int)sqrt(n+0.5);
	memset(vis,0,sizeof(vis));
	memset(prime,0,sizeof(prime));
	for(i=2;i<=m;i++) 
	{
		if(!vis[i])
		{
			for(j=i*i;j<=n;j=j+i)
			{ 
   				vis[j]=1;	
			}
		}
	}
}
int main()
{
	int i,j,a,b,ans,t=0;
	get_prime();
	q[0]=0,q[1]=0;
	for(i=2;i<1000000;i++)
	{
		q[i]=q[i-1];
		if(!vis[i])
		{
			int num=i,mid=0;
			while(num)
			{
				mid+=num%10;
				num=num/10;
			}
			if(!vis[mid])
				q[i]++;
		}
	}
	scanf("%d",&ans);
	while(ans--)
	{
		scanf("%d %d",&a,&b);
		t++;
		printf("Case #%d: %d\n",t,q[b]-q[a-1]);
	}
	return 0;
}