#include"stdio.h"
#include"algorithm"
#include"string.h"
#include"cstdio"
using namespace std;
const int max_n=2*(1e5)+10;
int n,k;
int len(int mid)
{
	int maxx=mid/2;
	if(maxx==0)
	return k;
	int less=(n-mid-1)%maxx==0?(n-mid-1)/maxx:(n-mid-1)/maxx+1;
	return less;
}
int EF()
{
	int l=2,r=n-1,mid;
	mid=(l+r)>>1;
	while(l<=r)
	{
		int maxx=mid/2;
		int less=len(mid);
		if(less+2<=k)
		r=mid-1;
		else 
		l=mid+1;
		mid=(l+r)>>1;//printf("&&  %d %d mid:%d\n",l,r,mid);//printf("**\n");
	}
	if(len(r)+2<=k)
	return r;
	return l;
}
int main()
{
	while(scanf("%d%d",&n,&k)!=EOF)
	{
 		int ret=EF();
 		printf("%d\n",ret);
		int i,num=0;
		int point[max_n],root=0;
		for(i=1;i<=ret;i++)
		printf("%d %d\n",i,i+1);
		i++;
		for(int j=0;j<k-2;j++)
			{
				printf("%d %d\n",(ret+2)/2,i);
				point[++root]=i++;
			}
		while(i<=n)
		{
			
			printf("%d %d\n",point[root--],i++);
			for(int p=0;p<(ret/2-2)&&i<=n;)
			{
				printf("%d %d\n",i-1,i);
				i++; p++;//printf("ret:%d",(ret/2)-1);
			}
		}
	}
} 