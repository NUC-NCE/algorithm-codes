#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e;
    while(scanf("%lf%lf%lf%lf ",&a,&b,&c,&d)!=EOF)
    {
        e=sqrt((a-c)*(a-c)+(b-d)*(b-d));
        printf("%.2f\n",e);
    }
    return 0;
}