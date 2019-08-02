#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b;
ll gcd(ll x,ll y)
{
    return y==0?x:gcd(y,x%y);
}
int main()
{
    while(~scanf("%lld %lld",&a,&b))
    {
        int flag=1;
        ll p=gcd(a,b);
        if(a*a-4*b*p<0)
        {
            printf("No Solution\n");
            continue;
        }
        ll maxn=a/p;
        int ans=sqrt(a*a-4*b*p);
        if(ans*ans!=a*a-4*b*p||(a-ans)%2!=0)
        {
            printf("No Solution\n");
            continue;
        }
        ll x=min((a-ans)/2,a-(a-ans)/2);
        ll y=a-x;
        printf("%lld %lld\n",x,y);
    }
    return 0;
}
