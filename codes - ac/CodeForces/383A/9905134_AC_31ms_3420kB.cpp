#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;
__int64 n;
__int64 a[200010];
int main()
{
    __int64 num,m=0,sum=0;
    scanf("%I64d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
        if(a[i]==0)
            sum+=m;
        else
            m++;
    }
    printf("%I64d\n",sum);
    return 0;
}
