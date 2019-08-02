#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
const int mod = 10;
using namespace std;
long long n,m;
long long mod_pow(long long x,long long n,long long mod)
{
    long long res=1;
    while(n>0)
    {
        if(n&1)
            res=res*x%mod;
        x=x*x%mod;
        n>>=1;
    }
    return res;
}
int main()
{
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%d",&m);
        int x=m;
        printf("%lld\n",mod_pow(x,m,mod));
    }
    return 0;
}
