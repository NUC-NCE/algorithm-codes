#include <cstdio>
#define maxn 100005
#define ll long long
#define mod 1000000007ll
using namespace std;
int mu[maxn], N, prime[maxn], mark[maxn], cnt[maxn], mi[maxn];
void shai()
{
    int i, j;
    mu[1]=1;
    for(i=2;i<maxn;i++)
    {
        if(!mark[i])
        {
            prime[++*prime]=i;mu[i]=-1;
        }
        for(j=1;i*prime[j]<maxn;j++)
        {
            mark[i*prime[j]]=1;
            if(i%prime[j]==0)break;
            mu[i*prime[j]]=-mu[i];
        }
    }
}
void init()
{
    int i, j, x;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&x);
        for(j=1;j*j<=x;j++)
            if(x%j==0)
                cnt[j]++,cnt[x/j]+=j!=x/j;
    }
    mi[0]=1;
    for(i=1;i<maxn;i++)mi[i]=(mi[i-1]<<1)%mod;
}
int main()
{
    ll ans=0;
    init();
    shai();
    for(int i=1;i<maxn;i++)
        ans=(ans+(mi[cnt[i]]-1)*mu[i])%mod;
    printf("%I64d",(ans+mod)%mod);
    return 0;
}