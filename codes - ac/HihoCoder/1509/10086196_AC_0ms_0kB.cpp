#include"stdio.h"
#include"string.h"
#include"cstdio"
#include"algorithm"
using namespace std;
typedef long long ll;
const int max_n=60;
ll A[max_n];
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i;
		for(i=0;i<n;i++)
		scanf("%lld",&A[i]);
		ll a=A[0],b;
		int B[70];
		bool judge=true;
		memset(B,-1,sizeof(B));
		for(i=1;i<n;i++)
		{
			b=A[i];
			for(int j=59;j>=0;j--)
			{
				if((a^b)&(1LL<<j))
				{
					if(a&(1LL<<j))
					{
						if(B[j]==-1) B[j]=1;
						if(B[j]==0) judge=false;
					}
					else
					{
						if(B[j]==-1) B[j]=0;
						if(B[j]==1) judge=false;
					}
					break;//printf("j:%d  B[j]:%d\n",j,B[j]);
				}
			}
			a=A[i];
			if(!judge) break;
		}
		if(!judge) printf("0\n");
		else
		{
			ll ret=1;
			for(i=0;i<60;i++)
			{
				if(B[i]==-1)
				ret<<=1;
			}
			printf("%lld\n",ret);
		}
	}
}