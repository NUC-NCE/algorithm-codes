#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
double a[15];
int main()
{
    int n;
    double d;
    while(~scanf("%d %lf",&n,&d))
    {
        double sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%lf",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            sum+=d * d * sin(a[i]/180*3.141592653)/2;
        }
        printf("%.3f\n",sum);
    }
    return 0;
}