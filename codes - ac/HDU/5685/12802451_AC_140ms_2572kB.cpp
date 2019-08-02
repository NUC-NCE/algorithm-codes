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
typedef unsigned long long ull;
ll s[110000];
char str[110000];
int n,l,r;
ll quick_power(ll a, ll b, ll mod){
    ll ret=1;
    while(b){
        if(b&1)
            ret=ret*a%mod;
        b>>=1;
        a=a*a%mod;
    }
    return ret;
}
ll inv(ll a,ll p){
    return quick_power(a,p-2,p);
}
int main()
{
    s[0]=1;
    while(~sd(n)){
        ss(str+1);
        int len=strlen(str+1);
        rep(1,len+1,i)
            s[i]=s[i-1]*(str[i]-28)%9973;

        while(n--){
            sd(l),sd(r);
            plld(s[r]*inv(s[l-1],(ll)9973)%9973);
        }
    }
    return 0;
}
