#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll p[30];
ll lucas(int n,int m)
{
    if(m<n-m)
        m=n-m;
    ll ans=1;
    for(int i=m+1;i<=n;i++)
        ans*=i;
    for(int i=1;i<=n-m;i++)
        ans/=i;
    return ans;
}
void init()
{
    p[1]=0;
    p[2]=1;
    for(int i=3;i<=20;i++)
        p[i]=(i-1)*(p[i-1]+p[i-2]);
}
int main()
{
    init();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        printf("%lld\n",lucas(n,n-m)*p[m]);
    }
    return 0;
}