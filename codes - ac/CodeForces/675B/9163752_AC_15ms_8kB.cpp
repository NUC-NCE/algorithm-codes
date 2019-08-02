#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    long long t;
    scanf("%lld",&t);
    long long a,b,c,d;
    long long x,y,z,w;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    x=a+b;
    y=a+c;
    z=b+d;
    w=c+d;
    long long maxn=x;
    long long minn=x;
    if(maxn<y)
        maxn=y;
    if(maxn<z)
        maxn=z;
    if(maxn<w)
        maxn=w;
    if(minn>y)
        minn=y;
    if(minn>z)
        minn=z;
    if(minn>w)
        minn=w;
    long long s=maxn-minn;
    if(s>t)
        printf("0\n");
    else
        printf("%lld\n",(t-s)*t);
    return 0;
}
