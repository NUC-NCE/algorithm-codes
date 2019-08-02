#include<bits/stdc++.h>
using namespace std;
long long n,m;
const int p=1000000007;
long long quick_mod(long long a,long long b)
{
    long long ans=1;
    a%=p;
    while(b)
    {
        if(b&1)
        {
            ans=ans*a%p;
            b--;
        }
        b>>=1;
        a=a*a%p;
    }
    return ans;
}
long long C(long long n,long long m)
{
    if(m>n)
        return 0;
    long long ans=1;
    for(int i=1;i<=m;i++)
    {
        long long a=(n+i-m)%p;
        long long b=i%p;
        ans=ans*(a*quick_mod(b,p-2)%p)%p;
    }
    return ans;
}
long long Lucas(long long n,long long m)
{
    if(m==0)
        return 1;
    return C(n%p,m%p)*Lucas(n/p,m/p)%p;
}

int main()
{
    while(~scanf("%lld %lld",&n,&m))
    {
        long long a=n+m-2;
        long long b=min(n, m)-1;
        printf("%lld\n",Lucas(a,b));
    }
    return 0;
}