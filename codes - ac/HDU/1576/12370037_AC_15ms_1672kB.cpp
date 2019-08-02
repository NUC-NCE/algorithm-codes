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
void exgcd(int a,int b,int &x,int &y)
{
	int d=a;
	if(b!=0){
		exgcd(b,a%b,y,x);
		y=y-(a/b)*x;
	}
	else{
		x=1;
		y=0;
	}
}
int main()
{
	int b=9973;
	int x,y,t,n,a;
	sd(t);
	while(t--){
		sd(n),sd(a);
		exgcd(a,b,x,y);
		x=(n*x)%b;
		x=(x%b+b)%b;
		pd(x);
	}
	return 0;
}