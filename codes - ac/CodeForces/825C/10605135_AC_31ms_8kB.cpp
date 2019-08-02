#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1010];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        while(a[i]>k*2)
        {
            k=k*2;
            cnt++;
        }
        k=max(a[i],k);
    }
    printf("%lld",cnt);
    return 0;
}
