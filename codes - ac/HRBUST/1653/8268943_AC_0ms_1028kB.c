#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        double a,b,c,d;
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        double p;
        p=(a-c)*(a-c)+(b-d)*(b-d);
        double f;
        f=sqrt(p);
        printf("%.2f\n",f);
    }
    return 0;
}