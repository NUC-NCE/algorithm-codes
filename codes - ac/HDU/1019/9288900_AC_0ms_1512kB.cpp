#include<cstdio>
#include<cstring>
typedef long long ll;
using namespace std;
ll gcd(ll x,ll y)
{
    if(y==0)
        return x;
    return gcd(y,x%y);
}
ll lcm(ll x,ll y)
{
    return x*y/gcd(x,y);
}
int main()
{
    ll n;
    scanf("%lld",&n);
    while(n--)
    {
        ll m,a;
        scanf("%lld",&m);
        ll p=1;
        while(m--)
        {
            scanf("%lld",&a);
            p=lcm(p,a);
        }
        printf("%lld\n",p);
    }
    return 0;
}
