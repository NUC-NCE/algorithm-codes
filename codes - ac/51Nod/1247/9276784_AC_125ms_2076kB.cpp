#include <bits/stdc++.h>
using namespace std;
long long gcd(long long x,long long y)
{
    if(y==0)
        return x;
    return gcd(y,x%y);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,x,y;
        scanf("%lld%lld%lld%lld",&a,&b,&x,&y);
        if(gcd(a,b)==gcd(x,y))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
