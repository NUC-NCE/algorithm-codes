#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll a[100010];
ll sum[100010];
int main()
{
    scanf("%lld",&n);
    sum[0]=0;
    for(ll i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        sum[i]=sum[i-1]+a[i];
    }
    if(sum[n]%2==1)
    {
        printf("NO");
        return 0;
    }
    for(ll i=1;i<=n;i++)
    {
        ll ans=sum[n]/2-a[i],res=sum[n]/2+a[i];
        if(binary_search(sum+1,sum+i,ans)||binary_search(sum+i+1,sum+n+1,res))
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
