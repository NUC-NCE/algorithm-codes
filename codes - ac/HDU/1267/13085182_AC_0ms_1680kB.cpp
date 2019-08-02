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
using namespace std;
ll a[30][30];
int main()
{
    rep(0,20,i){
        a[0][i]=1;
        a[i][0]=0;
    }
    rep(1,20,i)
        rep(i,20,j)
            a[i][j]=a[i-1][j]+a[i][j-1];
    ll n,m;
    while(~(slld(n),slld(m)))
    {
        plld(a[m][n]);
    }
}