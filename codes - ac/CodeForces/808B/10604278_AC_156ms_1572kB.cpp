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
    int q=n-k+1;
    double sum=0,w,ans=0;
    int j=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
        if(i<q)
            ans+=a[i];
        if(i==q-1)
            sum+=ans/q;
        if(i>q-1)
        {
            ans+=a[i];
            ans-=a[j];
            sum+=ans/q;
            j++;
        }
    }
    printf("%.10f\n",sum);
    return 0;
}