#include"stdio.h"
#include"string.h"
#include"cstdio"
#include"algorithm"
using namespace std;
const int max_n=1e6+10;
char A[max_n];
int B[max_n];
int k,n,num;
int judge(int mid)
{
	int maxx=B[1],minn=0,l=0,r=0,len;
	B[0]=-1;B[num]=n-1;B[num+1]=0x3f3f3f3f;
	bool p=true;
	while(l<r||p)
	{//printf("l:%d r:%d mid:%d minn:%d\n",l,r,mid,minn);
		if(B[r+1]-B[l]>mid)
		{
			minn++;
			l=r;
		}
		while(B[r+1]-B[l]<=mid&&r<num)
		{
			//if(B[r+1]-B[l]==mid)
			maxx=max(maxx,B[r+1]-B[l]);r++;
		}
		p=false;
	}//printf("r:%d  maxx:%d  minn%d num:%d\n",r,maxx,minn,num);
	if(minn>k||r<num)
	return 0;
	return maxx;
}
int EF()
{
	int l=1,r=n,mid;
	mid=(l+r)>>1;
	while(l<=r)
	{
		if(judge(mid))
		r=mid-1;
		else
		l=mid+1;
		mid=(l+r)>>1;
	}//printf("r:%d judge(r):%d\n",r,judge(r));
	if(judge(r))
	{
	
		return judge(r);
	}
	else
	{//printf("l:%d\n",l);
		
		return judge(l);
	}
}
int main()
{
	while(scanf("%d",&k)!=EOF)
	{
		getchar();
		gets(A);
		n=strlen(A);
		num=1;
		for(int i=0;i<n;i++)
		{
			if(A[i]==' '||A[i]=='-')
			B[num++]=i;//printf("B[num]:%d  num:%d\n",B[num-1],num);
		}
		int ret=EF();
		printf("%d\n",ret);
	}
} 