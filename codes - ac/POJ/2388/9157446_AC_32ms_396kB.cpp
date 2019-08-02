#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int n;
int a[10005];
int main()
{
    while(~scanf("%d",&n)&&n)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        printf("%d\n",a[(n+1)/2-1]);
    }
    return 0;
}
