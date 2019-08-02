#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2005;
ll a[maxn],b[maxn];
int main()
{
    int n,k,p;
    scanf("%d%d%d",&n,&k,&p);
    for(int i=1;i<=n;i++)
        scanf("%I64d",&a[i]);
    for(int i=1;i<=k;i++)
        scanf("%I64d",&b[i]);
    sort(a+1,a+n+1);
    sort(b+1,b+k+1);
    ll ans=1e18;
    for(int i=1;i<=k-n+1;i++)
    {
        int delta=i-1;
        ll ma=0;
        for(int j=1;j<=n;j++)
            ma=max(ma,abs(a[j]-b[j+delta])+abs(b[j+delta]-p));
        ans=min(ans, ma);
    }
    printf("%I64d\n",ans);
    return 0;
}