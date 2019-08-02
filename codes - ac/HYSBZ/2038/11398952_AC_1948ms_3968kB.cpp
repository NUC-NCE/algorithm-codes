#include<stdio.h>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;const int N=50010;
struct Mo
{
    ll l,r,ID,A,B;
}q[N];
ll S(ll x)
{
    return x*x;
}
ll GCD(ll a,ll b)
{
    return (b==0)?a:GCD(b,a%b);
}
ll n,m,col[N],unit,Be[N];
ll sum[N],ans;
bool cmp(Mo a,Mo b)
{
    return Be[a.l]==Be[b.l]?a.r<b.r:a.l<b.l;
}
bool CMP(Mo a,Mo b)
{
    return a.ID<b.ID;
}
void revise(ll x,ll add)
{
    ans-=S(sum[col[x]]);
    sum[col[x]]+=add;
    ans+=S(sum[col[x]]);
}
int main()
{
    scanf("%lld%lld",&n,&m);
    unit=sqrt(n);
    for(ll i=1;i<=n;i++)
        scanf("%lld",&col[i]),Be[i]=i/unit+1;;
    for(ll i=1;i<=m;i++)
        scanf("%lld%lld",&q[i].l,&q[i].r),q[i].ID=i;

    sort(q+1,q+m+1,cmp);
    ll l=1,r=0;
    for(ll i=1;i<=m;i++)
    {
        for(;l<q[i].l;l++)
            revise(l,-1);
        for(;l>q[i].l;l--)
            revise(l-1,1);
        for(;r<q[i].r;r++)
            revise(r+1,1);
        for(;r>q[i].r;r--)
            revise(r,-1);
        if(q[i].l==q[i].r)
        {
            q[i].A=0;q[i].B=1;continue;
        }
        q[i].A=ans-(q[i].r-q[i].l+1);
        q[i].B=1LL*(q[i].r-q[i].l+1)*(q[i].r-q[i].l);
        ll gcd=GCD(q[i].A,q[i].B);q[i].A/=gcd;q[i].B/=gcd;
    }
    sort(q+1,q+m+1,CMP);
    for(ll i=1;i<=m;i++)
        printf("%lld/%lld\n",q[i].A,q[i].B);
    return 0;
}
