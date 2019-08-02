#include<iostream>
#include<string.h>
using namespace std;
long long phi[3000001];
void get_euler()
{
	for(int i=2;i<3000001;i++)
	{
		if(!phi[i])
		{
			for(int j=i;j<3000001;j+=i)
			{
				if(!phi[j])phi[j]=j;
				phi[j]=phi[j]/i*(i - 1);
			}
		}
	}
	for (int i=3;i<3000001;i++)
	{
		phi[i]+=phi[i-1];
	}
}

int main()
{
	memset(phi,sizeof(phi),0);
	get_euler();
	int a,b;
	while (scanf("%d %d",&a,&b)!=EOF)
	{
		printf("%lld\n",phi[b]-phi[a-1]);
	}
	return 0;
}