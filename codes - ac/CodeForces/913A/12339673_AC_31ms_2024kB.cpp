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
typedef unsigned long long ull;
int n,m;
int main()
{
	cin>>n>>m;
	if(n>=27)
        cout<<m;
    else{
        int ans=1;
        while(n--)
            ans*=2;
        cout<<m%ans;
    }
	return 0;
}