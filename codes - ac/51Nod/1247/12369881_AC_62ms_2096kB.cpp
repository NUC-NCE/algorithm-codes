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
using namespace std;
ll gcd(ll x,ll y)
{
    if(y==0)
        return x;
    return gcd(y,x%y);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll a,b,x,y;
        scanf("%lld%lld%lld%lld",&a,&b,&x,&y);
        if(gcd(a,b)==gcd(x,y))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

