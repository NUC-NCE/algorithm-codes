#include"stdio.h"
#include"cstdio"
#include"algorithm"
#include"string.h"
#include"math.h"
using namespace std;
const int max_n=1e6+10;
typedef long long ll;
ll A[max_n];
int main()
{
	ll num=0;
	for(int i=0;i<=30;i++)
	{
		for(int j=0;j<=20;j++)
		{
			for(int k=0;k<=13;k++)
			{
				for(int p=0;p<=11;p++)
				{
					ll ans=pow(2,i)*pow(3,j)*pow(5,k)*pow(7,p);
					if(ans<=1e15)
					A[num++]=ans;
				}
			}
		}
	}
	sort(A,A+num);
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			ll n;
			scanf("%lld",&n);
			ll ret=A[lower_bound(A,A+num,n)-A];
			printf("%lld\n",ret);
		}
	}
} 