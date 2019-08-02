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
ll solve(ll a,ll b){
    if(a==0)
        return b+1;
    if(a==1)
        return b+2;
    if(a==2)
        return b*2+3;
    if(b==0)
        return solve(a-1,1);
    return solve(a-1,solve(a,b-1));
}
int main()
{
    ll a,b;
    while(~(slld(a),slld(b))){
        plld(solve(a,b));
    }
    return 0;
}

