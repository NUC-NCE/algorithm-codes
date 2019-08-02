#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d);
using namespace std;
typedef long long ll;
int eular(int n)
{
	int ret=1,i;
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			n/=i,ret*=i-1;
			while(n%i==0)
				n/=i,ret*=i;
		}
	}
	if(n>1)
		ret*=n-1;
	return ret;
}
int main()
{
	int t;
	sd(t);
	while(t--){
		int n;
		sd(n);
		pd(eular(n));
	}
	return 0;
}