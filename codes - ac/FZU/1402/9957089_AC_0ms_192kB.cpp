#include<cstdio>
#include<cstring>
using namespace std;
__int64 exgcd(__int64 a,__int64 b,__int64 &x,__int64 &y)
{
	__int64 d=a;
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
int main()
{
    int n;
    __int64 r1, a1, r2, a2, x0, y0;
    while(~scanf("%d",&n))
    {
        int flag=1;
        scanf("%I64d %I64d",&a1,&r1);
        for(int i=1;i<n;i++)
        {
            scanf("%I64d %I64d",&a2,&r2);
            __int64 a=a1,b=a2,c=r2-r1;
            __int64 d=exgcd(a,b,x0,y0);
            if(c%d!=0)
                flag=0;
            __int64 t=b/d;
            x0=(x0*(c/d)%t+t)%t;
            r1=a1*x0+r1;
            a1=a1*(a2/d);
        }
        if(!flag)
        {
            printf("-1\n");
        }
        else
            printf("%I64d\n",r1);
    }
    return 0;
}