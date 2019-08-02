#include<iostream>
#include<cstdio>
const int mod = 1000000007;
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,k,sum,p;
        scanf("%lld %lld",&n,&k);
        sum=1;
        for(int i=2;i<=n;i++)
        {
            p=1;
            for(int j=0;j<k;j++)
            {
                if(p*i<mod)
                    p=p*i;
                else
                    p=((p%mod)*(i%mod))%mod;
            }
            sum+=p;
        }
        printf("%lld\n",sum%mod);
    }
    return 0;
}
