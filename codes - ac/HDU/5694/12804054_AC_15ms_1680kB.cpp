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
const int ant=8000;
int a[10000],sum[20000];
ll solve(ll r){
    if(r==0)
        return 0;
    ll n=1;
    rep(0,999,i){
        if(n<=r&&n*2>r)
            break;
        n*=2;
    }
    if(n==r)
        return (n/2+1);
    return (r-n+1+solve(n*2-r-1));
}
int main()
{
    int t;
    ll l,r;
    sd(t);
    while(t--){
        slld(l),slld(r);
        plld(solve(r)-solve(l-1));
    }
}
