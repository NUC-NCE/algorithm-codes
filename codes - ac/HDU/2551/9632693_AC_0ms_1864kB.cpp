#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int n;
long long a;
int main()
{
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld",&a);
        long long temp=0;
        int i;
        for(i=0;temp<a;i++)
        {
            temp+=i*i*i;
        }
        printf("%d\n",i-1);
    }
    return 0;
}
