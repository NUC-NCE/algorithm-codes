#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
ll n;
ll sum;
int main()
{
    int t;
    /*for(ll a=10000;a<=1000100;a++)
    {
        for(ll b=a;b<=1000100;b++)
        {
            for(ll c=a;c<=b;c++)
            {
                for(ll d=a;d<=b;d++)
                {
                    if((a*a+b*b)*c*d<=(c*c+d*d)*a*b)
                        printf("%lld %lld:%lld %lld\n",a,b,c,d);
                }
            }
        }
    }*/
    while(scanf("%d",&t)!=EOF)
    {
        ll T=0;
        while(t--)
        {
            ll a,b;
            scanf("%lld%lld",&a,&b);
            if(a>b) swap(a,b);
            printf("Case #%lld:\n",++T);
            if(a==b) printf("1\n%lld %lld\n",a,b);
            else printf("2\n%lld %lld\n%lld %lld\n",a,b,b,a);
        }
    }
    return 0;
}