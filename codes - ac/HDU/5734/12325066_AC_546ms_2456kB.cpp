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
ll w[100010];
ll n;
ll gcd(ll x, ll y)
{
    return (y==0?x:gcd(y,x%y));
}
int main()
{
    int t;
    sd(t);
    while(t--)
    {
        ll num1=0,num2=0;
        slld(n);
        rep(0,n-1,i)
        {
            scanf("%lld",&w[i]);
            w[i]=(w[i]<0?w[i]:-w[i]);
            num1+=w[i];
            num2+=(w[i]*w[i]);
        }
        ll ans,res;
        ans=n*num2-num1*num1;
        res=n;
        printf("%lld/%lld\n",ans/gcd(ans,res),res/gcd(ans,res));
    }
    return 0;
}
