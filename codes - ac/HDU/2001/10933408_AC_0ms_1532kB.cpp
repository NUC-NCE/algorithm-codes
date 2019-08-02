#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e;
    while(scanf("%f %f %f %f ",&a,&b,&c,&d)!=EOF)
    {
        e=sqrt((a-c)*(a-c)+(b-d)*(b-d));
        printf("%.2f\n",e);
    }
    return 0;
}