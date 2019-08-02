#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int fib[21]={0,1,1};
void init()
{
    for(int i=2;i<21;i++)
        fib[i]=fib[i-1]+fib[i-2];
}
int main()
{
    int n;
    init();
    while(~scanf("%d",&n))
    {
        if(n<=20)
        {
            printf("%d\n",fib[n]);
            continue;
        }
        else
        {
            double ans=-0.5*log(5.0)/log(10.0)+((double)n) * log((sqrt(5.0)+1.0)/2.0) / log(10.0);
            ans-=floor(ans);
            ans=pow(10.0,ans);
            while(ans<1000)
                ans*=10;
            printf("%d\n",(int)ans);
        }
    }
    return 0;
}