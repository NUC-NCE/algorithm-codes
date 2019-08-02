#include<cstdio>
#include<math.h>
#include<algorithm>
using namespace std;
int n;
int main()
{
    while(~scanf("%d",&n)&&n)
    {
        int d=(log10(sqrt(4.0*acos(0.0)*n))+n*(log10(n)-log10(exp(1.0))))+1;
        printf("%d\n",d);
    }
    return 0;
}
