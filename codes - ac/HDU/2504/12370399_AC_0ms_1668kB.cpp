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
int gcd(int a,int b)
{
	if(b==0) 	
		return a; 
	return gcd(b,a%b);
}
int main()
{
	int n;
	sd(n);
	while(n--)
	{
		int a,b;
		sd(a),sd(b);
		for(int i=b+b; i<1000000; i=i+b)
			if(gcd(a,i)==b)
			{
				pd(i);
				break;
			}
	}
	return 0;
}