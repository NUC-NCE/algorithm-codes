#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e7+100;
ll prime[maxn],num;
ll vst[maxn+5],miu[maxn+5];

void Pre()
{
    
    miu[1]=1;
    for (int i=2; i<=maxn-50; i++)
    {
        if (!vst[i]) prime[++num]=i,miu[i]=-1;
        for (int j=1; j<=num && (ll)i*prime[j]<=maxn-50; j++)
        {
            vst[i*prime[j]]=1;
            if (i%prime[j]==0)
            {
                miu[i*prime[j]]=0;
                break;
            }
            miu[i*prime[j]]=miu[i]*miu[prime[j]];
        }
    }
    for (int i=2; i<=maxn-50; i++) miu[i]+=miu[i-1];
}
ll cal(ll n,ll m)
{
    ll ret=0;
    ll la;
    if(n>m)
        swap(n,m);
    for(int i=1;i<=n;i=la+1){
        la=min(n/(n/i),m/(m/i));
        ret=ret+(1LL)*(miu[la]-miu[i-1])*(n/i)*(m/i);
    }
    return ret;
}

int main()
{
    Pre();
    ll a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    ll ans=cal(b,d)-cal(a-1,d)-cal(b,c-1)+cal(a-1,c-1);
    printf("%lld\n",ans);
}
