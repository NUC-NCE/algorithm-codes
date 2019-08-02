#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int r,h;
    scanf("%d%d",&r,&h);
    int p=min(r,h);
    long long x=1;
    for(long long i=1;i<=p;i++)
        x*=i;
    printf("%lld\n",x);
    return 0;
}
