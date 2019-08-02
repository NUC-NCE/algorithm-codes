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
#define pd(d) printf("%d\n",d)
#define plld(d) printf("%lld\n",d)
typedef long long ll;
using namespace std;
/*
11 5   11+5=16   16*15*14*13*12/(5*4*3*3*1)=4368   4368-1=4367
3 2               5*4/2=10                         10- 1=9
37 63     (100*99*98*.....*38/(63!))%mod=230575    230575-1=230574
*/
const int mod=1e6+3;
ll quick(ll a,ll b)
{
    if(b==0)
        return 1;
    ll res=quick(a*a%mod,b/2);
    if(b%2)
        res=res*a%mod;
    return res;
}

int main()
{
    int n,c;
    while(cin>>n>>c)
    {
        ll ans=1;
        for(int i=n+1;i<=n+c;i++)
            ans=(ans*i)%mod;
        for(int i=2;i<=c;i++)
            ans=ans*quick(i,mod-2)%mod;
        cout<<ans-1<<endl;
    }
    return 0;
}