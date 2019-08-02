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
typedef unsigned long long ull;
int n,m;
int a,b;
ll x[50]={0,3,9};
int main()
{
    rep(3,40,i)
    {
        x[i]=x[i-1]*2+x[i-2];
    }
    sd(m);
    while(m--){
        sd(n);
        plld(x[n]);
    }
    return 0;
}
