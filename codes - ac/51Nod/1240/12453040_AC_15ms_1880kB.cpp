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
#define plld(d) printf("%lld\n",d);
using namespace std;
typedef long long ll;
const int mod=1e9+7;


int main()
{
	ll n;
	sd(n);
	int ans=1;
	bool v=false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			ans++;
			n/=i;
			if(n%i==0){
				v=true;
				puts("0");
				return 0;
			}
		}
	}
    if(ans%2==1)
        puts("-1");
    else
        puts("1");
	return 0;
}