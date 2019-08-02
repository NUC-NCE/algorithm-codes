#include<stdio.h>
#include<math.h>
const double PI=acos(-1.0);
int main()
{
    double d,h,v,e;
    while(~scanf("%lf %lf %lf %lf",&d,&h,&v,&e))
    {
    	double r=d/2;
    	double t=h/(v/(PI*r*r)-e);
    if(t<0)
    	printf("NO\n");
    else
    {
        printf("YES\n");
        printf("%.10lf\n",t);
    }
	}
    return 0;
}