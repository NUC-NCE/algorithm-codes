#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;
__int64 n,q,l,r;
__int64 a[200010];
__int64 b[200010];
int main()
{
    scanf("%I64d %I64d",&n,&q);
    memset(b,0,sizeof(b));
    for(int i=1;i<=n;i++)
        scanf("%I64d",&a[i]);
    while(q--)
    {
        scanf("%I64d %I64d",&l,&r);
        b[l]++;
        b[r+1]--;
    }
    for(int i=1;i<=n;i++)
        b[i]+=b[i-1];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    __int64 sum=0;
    for(int i=1;i<=n;i++)
        sum+=a[i]*b[i];
    printf("%I64d\n",sum);
    return 0;
}
