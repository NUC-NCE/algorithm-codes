#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
double x[105];
double y[105];
int n;
int i,j;
using namespace std;
int main()
{
    double sum;
    while(~scanf("%d",&n)&&n)
    {
        sum=0;
        memset(x,0,sizeof(x));
        memset(y,0,sizeof(y));
        for(i=0;i<n;i++)
        {
            scanf("%lf %lf",&x[i],&y[i]);
        }
        for(i=0;i<n;i++)
        {
            j=(i+1)%n;
            sum+=(x[i]*y[j]-x[j]*y[i])*1.000000/2;
        }
        printf("%.1f",fabs(sum));
        if(n)
            printf("\n");
    }
    return 0;
}
