#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
long long a,b,c,k,t;
const int mod = 200907;
long long mod_pow(long long x,long long n,long long mod)
{
    long long res=1;
    while(n>0)
    {
        if(n&1)
            res=(res%mod)*(x%mod)%mod;
        x=x%mod*(x%mod)%mod;
        n>>=1;
    }
    return res;
}
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&c,&k);
        if(b-a==c-b)
        {
            long long d=b-a;
            d=d%mod;
            long long res=((a%mod)+(d%mod)*((k-1)%mod))%mod;
            printf("%lld\n",res);
        }
        else
        {
            long long q=b/a;
            printf("%lld\n",a*mod_pow(q,k-1,mod)%mod);
        }
    }
    return 0;
}
