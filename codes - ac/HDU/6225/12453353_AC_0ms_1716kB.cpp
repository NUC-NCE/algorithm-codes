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
typedef unsigned long long ull;
ull a,b,c,d;
int main()
{
	int n;
	cin>>n;
	while(n--){
		ull ans=0;
		cin>>a>>b>>c>>d;
		ans=a+b+c+d;
		if(a==4611686018427387904&&b==4611686018427387904&&c==4611686018427387904&&d==4611686018427387904)
			puts("18446744073709551616");
		else
			cout<<ans<<endl;
	}
	
	return 0;
}