#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    int i=1;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,m,p=0;
        scanf("%lld%lld",&n,&m);
        while(n>m)
        {
            n=n-(n+1)/2;
            p++;
        }
        printf("Case %d: %d\n",i,p);
        i++;
    }
    return 0;
}