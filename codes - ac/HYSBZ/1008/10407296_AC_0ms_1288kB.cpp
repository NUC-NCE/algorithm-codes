#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=100003;
ll quick_pow(ll x,ll n)
{
    if(n==0)
        return 1;
    ll res=quick_pow(x*x%mod,n/2);
    if(n&1)
        res=res*x%mod;
    return res;
}
int main()
{
    ll n,m;
    while(~scanf("%lld %lld",&m,&n))
    {
        ll no=(m*quick_pow(m-1,n-1))%mod;
        ll sum=quick_pow(m,n)%mod;
        ll yes=(sum-no)%mod;
        printf("%lld\n",(yes<0?(yes+mod):yes));
    }
    return 0;
}
