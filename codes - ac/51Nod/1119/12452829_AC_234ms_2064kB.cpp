#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d);
#define plld(d) printf("%lld\n",d);
using namespace std;
typedef long long ll;
const int mod=1e9+7;
ll n,m;
const int p=1000000007;
ll quick_mod(ll a,ll b)
{
    ll ans=1;
    a%=p;
    while(b)
    {
        if(b&1)
        {
            ans=ans*a%p;
            b--;
        }
        b>>=1;
        a=a*a%p;
    }
    return ans;
}
ll C(ll n ,ll m)
{
    if(m>n)
        return 0;
    ll ans=1;
    rep(1,m,i)
    {
        ll a=(n+i-m)%p;
        ll b=i%p;
        ans=ans*(a*quick_mod(b,p-2)%p)%p;
    }
    return ans;
}
ll Lucas(ll n,ll m)
{
    if(m==0)
        return 1;
    return C(n%p,m%p)*Lucas(n/p,m/p)%p;
}

int main()
{
    slld(n),slld(m);
    ll a=n+m-2;
    ll b=min(n, m)-1;
    plld(Lucas(a,b));
    return 0;
}

























/*


int vis[2000100];
ll prime[2000000];
ll c;
ll q[2000010];
void get_prime()
{
	int i,j,n,m;
	c=0;
	n=2000000;
	m=(int)sqrt(n+0.5);
	memset(vis,0,sizeof(vis));
	memset(prime,0,sizeof(prime));
	for(i=2;i<=m;i++)
	{
		if(!vis[i])
		{
			for(j=i*i;j<=n;j=j+i)
			{
   				vis[j]=1;
			}
		}
	}
	int q=1;
	for(i=2;i<=m;i++)
	{
	    if(!vis[i])
            prime[q++]=i;
	}
}

int main()
{
    int n;
    get_prime();
    sd(n);
    rep(1,1000000,i){
        if(prime[i]>=n&&!vis[i]){
            pd(prime[i]);
            return 0;
        }
    }
}*/
