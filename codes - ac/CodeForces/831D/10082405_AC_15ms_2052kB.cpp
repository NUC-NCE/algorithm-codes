#include"stdio.h"
#include"cstdio"
#include"string.h"
#include"algorithm"
using namespace std;
const int max_n=2*(1e3)+10;
int n,k,p;
typedef long long ll;
int A[max_n],B[max_n];
int Ef(ll x)
{
	int i,j,id=0;
	for(i=0;i<n;i++)
	{
		bool judge=false;
		for(j=id;j<k;j++)
		{
			if(abs(B[j]-p)+abs(A[i]-B[j])<=x)
			{//printf("&&&%lld  d:%d  %d\n",B[j],,j);
				judge=true;//+abs()abs(A[i]-)
				id=j+1;
				break;
			}
		}
		if(!judge)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	while(scanf("%d%d%d",&n,&k,&p)!=EOF)
	{
		int i;
		for(i=0;i<n;i++)
		scanf("%d",&A[i]);
		for(i=0;i<k;i++)
		scanf("%d",&B[i]);
		sort(A,A+n);
		sort(B,B+k);
		ll l=0,r=4*(1e9)+10,mid;
		mid=(l+r)>>1;
		while(l<=r)
		{
			if(Ef(mid))
			r=mid-1;
			else
			l=mid+1;//printf("l:%lld r:%lld\n",l,r); 
			mid=(l+r)>>1;
		}
		printf("%lld\n",l);
	}
}