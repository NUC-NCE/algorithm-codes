#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
double a[200010];
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int p=n-k+1;
    double sum=0,w,ans=0;
    int j=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
        if(i<p)
            ans+=a[i];
        if(i==p-1)
            sum+=ans/p;
        if(i>p-1)
        {
            ans+=a[i];
            ans-=a[j];
            sum+=ans/p;
            j++;
        }
    }
    printf("%.10f\n",sum);
    return 0;
}