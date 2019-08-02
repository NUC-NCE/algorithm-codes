#include<cstdio>
#include<math.h>
#include<string.h>
using namespace std;
int vis[100010];
int prime[100000],c;
int a[100010];
int n;
void get_prime()
{
	int i,j,n,m;
	c=0;
	n=100000;
	m=sqrt(n+0.5);
	memset(vis,0,sizeof(vis));
	for(i=2;i<=m;i++)
    {
        if(!vis[i])
        {
            for(j=i*i;j<=n;j+=i) vis[j]=1;
        }
    }
}
void init()
{
    int i;
    get_prime();
	n=0;
	a[0]=0;a[1]=0;a[2]=0;a[3]=0;a[4]=0;
	for(i=5;i<=100000;i++)
	{
         if(!vis[i]&&!vis[i-2])
		 {
			 n++;
		 }
		 a[i]=n;
	}
	while(i<=100000)
	{
		a[i++]=n;
	}
}
int main()
{
	init();
	while(~scanf("%d",&n)&&n>=0)
	{
		printf("%d\n",a[n]);
	}
	return 0;
}
