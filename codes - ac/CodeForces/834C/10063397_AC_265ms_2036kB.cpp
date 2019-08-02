#include"stdio.h"
#include"cstdio"
#include"algorithm"
#include"string.h"
typedef long long ll;
using namespace std;
ll EF(ll c)
{
	ll l,r,mid;
	l=1,r=ll(1e6+1),mid=(l+r)>>1;
	while(l<r)
	{
		ll ans=mid*mid*mid;
		if(ans>c)
		r=mid-1;
		else if(ans<c)
		l=mid+1;
		else return mid;
		mid=(l+r)>>1;//printf("**%lld %lld  %lld, ans:%lld\n",l,r,mid,ans);
	}
	return mid;
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i;
		ll a,b;
		for(i=0;i<n;i++)
		{
			scanf("%lld%lld",&a,&b);
			ll c=a*b;
			ll ret=EF(c);
			if(c==0)
			ret=1;
			if(ret*ret*ret==c&&(a%ret==0&&b%ret==0))
			printf("Yes\n");
			else
			printf("No\n");
		}
	} 
}