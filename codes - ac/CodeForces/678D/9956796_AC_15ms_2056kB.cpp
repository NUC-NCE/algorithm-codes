#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,n,x,mod=1e9+7;
ll quickpow(ll a,ll b,ll mod)
{
    if(b==0)
        return 1;
    ll k=quickpow(a,b/2,mod);
    k*=k;
    k%=mod;
    if(b%2)
        k=k*a%mod;
    return k%mod;
}
int main()
{
	scanf("%lld %lld %lld %lld",&a,&b,&n,&x);
	ll p=x*quickpow(a,n,mod);
	p%=mod;
	ll res;
	if(a>1)
    {
        res=b*(quickpow(a,n,mod)-1);
        res%=mod;
        res*=quickpow(a-1,mod-2,mod);
        p+=res;
        p%=mod;
    }
    else
    {
        p+=b*(n%mod);
        p%=mod;
    }
    printf("%d\n",p);
	return 0;
 }
