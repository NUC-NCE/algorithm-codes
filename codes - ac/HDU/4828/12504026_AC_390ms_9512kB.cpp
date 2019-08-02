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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int t;
ll h[1000100]={1,1};
const ll mod=1e9+7;
ll quick_pow(ll a,ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1) ans=(ans*a)%mod;
        b>>=1;
        a=(a*a)%mod;
    }
    return ans;
}
int main(){
    h[1]=1;
    rep(2,1000000,i)
        h[i]=((h[i-1]*(4*i-2)%mod)*quick_pow(i+1,mod-2))%mod;//i+1的逆元是quick_pow(i+1,mod-2)
        //除法取余分母和mod值互质一定要算逆元，（a/b）%mod,gcd(b,mod)==1时，b1=b^(mod-2)。
    int t;
    sd(t);
    rep(1,t,i){
        int p;
        sd(p);
        printf("Case #%d:\n%lld\n",i,h[p]);
    }
}