#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long n,a,b,x,y,lcm,num;
int flag;
long long exgcd(long long a,long long b,long long &x,long long &y)
{
	long long d=a;
	if(b!=0)
	{
		d=exgcd(b,a%b,y,x);
		y=y-(a/b)*x;
	}
	else
	{
		x=1;
		y=0;
	}
	return d;
}
void minx()
{
    long long p=exgcd(a,b,x,y);
    if((n+1)%p!=0)
        printf("0\n"),
        flag=0;
    else
    {
        lcm=a*b/p;
        x=x*((1+n)/p);
        long long r=b/p;
        x=(x%r+r)%r;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        flag=1;
    	long long num=0;
        scanf("%lld%lld%lld",&n,&a,&b);
        minx();
        if(x==0&&flag)
            x=lcm/a;
        if(x*a>n&&flag)
        {
            printf("0\n");
            continue;
        }
        else
        {
            if(flag)
                num=(n-x*a)/lcm+1,
                printf("%d\n",num);
        }
    }
    return 0;
}