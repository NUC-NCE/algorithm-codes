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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll a,b,n,m;
void quickpows(){
    ll ans1=1,ans2=0,t1=a,t2=1;
    ll tmp;
    while(n){
        if(n&1){
            tmp = ans1;
            ans1 = (ans1*t1+ans2*t2*b)%m;
            ans2 = (tmp*t2+ans2*t1)%m;
        }
        tmp = t1;
        t1 = (t1*t1+t2*t2*b)%m;
        t2 = 2*tmp*t2%m;
        n >>= 1;
    }
    printf("%lld\n",ans1*2%m);
}

int main()
{
    while(~scanf("%lld%lld%lld%lld",&a,&b,&n,&m))
        quickpows();
    return 0;
}