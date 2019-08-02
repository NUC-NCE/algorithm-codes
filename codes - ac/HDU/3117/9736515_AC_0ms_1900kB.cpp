#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int fib[41];
struct data
{
    int jz[2][2];
};
data p={0,1,
        1,1};
data q={1,0,
        0,1};
int jl;
void init()
{
    fib[0]=0,fib[1]=1;
    for(int i=2;;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        if(fib[i]>=100000000)
        {
            jl=i-1;
            break;
        }
    }
}
int hh(int n)
{
    return pow(10,(log10(1/sqrt(5.0))+n*log10((1+sqrt(5.0))/2.0)-(int)(log10(1/sqrt(5.0))+n*log10((1+sqrt(5.0))/2.0))+3));
}

data jzcf(data a,data b)
{
    data c;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c.jz[i][j]=0;
            for(int k=0;k<2;k++)
                c.jz[i][j]+=(a.jz[i][k]*b.jz[k][j])%10000;
            c.jz[i][j]%=10000;
        }
    }
    return c;
}
data quick_pow(long long n)
{
    data m=p,b=q;
    while(n>=1)
    {
        if(n&1)
            b=jzcf(b,m);
        n=n>>1;
        m=jzcf(m,m);
    }
    return b;
}

int main()
{
    long long n;
    init();
    while(~scanf("%lld",&n))
    {
        if(n<=jl)
            printf("%d\n",fib[n]);
        else
        {
            printf("%d...",hh(n));
            data x=quick_pow(n);
            printf("%04d\n",x.jz[0][1]);
        }
    }
    return 0;
}
