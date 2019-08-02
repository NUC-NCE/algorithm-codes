#include<cstdio>
#include<cstring>
using namespace std;
long long t,n;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n<20150001)
            n=n+2014;
        else
            n=20152014;
        printf("%lld\n",n);
    }
    return 0;
}
