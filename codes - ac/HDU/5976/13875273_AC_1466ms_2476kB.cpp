#include <stdio.h>
#include <cstdio>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
const int maxn=1e5+10;
ll sum[maxn];
ll fac[maxn];
ll pows(ll a,ll b,ll c)
{
    ll res=1;
    while(b)
    {
        if(b&1)
            res=res*a%c;
        a=a*a%c;
        b>>=1;
    }
    return res;
}


int main()
{
    int t;
    sum[0]=1;
    for(int i=1;i<=100000;i++)
        sum[i]=sum[i-1]*i%mod;
    scanf("%d",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        if(n<=4){
            printf("%d\n",n);
            continue;
        }
        ll y,m;
        ll l=0,r=1000000;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if((mid*(mid+1)/2)>=n)
            {
                m=mid;
                y=m*(m+1)/2-n;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        if(y==0)
            printf("%lld\n",sum[m+1]*pows(m,mod-2,mod)%mod);
        if(y==1)
            printf("%lld\n",sum[m]%mod);
        if(y==2)
            printf("%lld\n",sum[m+1]*pows(2*m,mod-2,mod)%mod);
        if(y>=3)
            printf("%lld\n",sum[m]*pows(y-1,mod-2,mod)%mod);
    }
    return 0;
}