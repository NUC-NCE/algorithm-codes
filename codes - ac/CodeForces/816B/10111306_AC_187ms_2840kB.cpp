#include <bits/stdc++.h>
using namespace std;
int a[200010];
int main()
{
    int n,k,q;
    scanf("%d%d%d",&n,&k,&q);
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        a[l]++;a[r+1]--;
    }
    for(int i=2;i<=200000;i++)
        a[i]+=a[i-1];
    for(int i=1;i<=200000;i++)
        a[i]=(a[i]>=k?1:0);
    for(int i=2;i<=200000;i++)
        a[i]+=a[i-1];
    for(int i=1;i<=q;i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        printf("%d\n",a[r]-a[l-1]);
    }
    return 0;
}
