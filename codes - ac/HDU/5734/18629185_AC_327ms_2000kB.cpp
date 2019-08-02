#include<cstdio>
using namespace std;
typedef long long ll;
ll w[100010];
ll gcd(ll x, ll y)
{
    return (y==0?x:gcd(y,x%y));
}
ll n;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll num1=0,num2=0;
        scanf("%lld",&n);
        for(int i=0;i<n;i++)
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
}