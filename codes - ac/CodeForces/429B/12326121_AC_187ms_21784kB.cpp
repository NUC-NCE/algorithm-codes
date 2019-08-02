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
int a[1005][1005];
int b[1005][1005],c[1005][1005],d[1005][1005],e[1005][1005];
int n,m;
int main()
{
    sd(n),sd(m);
    me(a,0),me(b,0),me(c,0),me(d,0),me(e,0);
    rep(1,n,i)
        rep(1,m,j)
            scanf("%d",&a[i][j]);
    rep(1,n,i)
        rep(1,m,j)
            b[i][j]=a[i][j]+max(b[i-1][j],b[i][j-1]);
    reps(n,1,i)
        reps(m,1,j)
            c[i][j]=a[i][j]+max(c[i+1][j],c[i][j+1]) ;

    rep(1,n,i)
        reps(m,1,j)
            d[i][j]=a[i][j]+max(d[i-1][j],d[i][j+1]);

    reps(n,1,i)
        rep(1,m,j)
            e[i][j]=a[i][j]+max(e[i][j-1],e[i+1][j]);
    int res=0;
    rep(2,n-1,i)
        rep(2,m-1,j)
            res=max(res, b[i-1][j] + c[i+1][j] + d[i][j+1] + e[i][j-1]),
            res=max(res, b[i][j-1] + c[i][j+1] + d[i-1][j] + e[i+1][j]);
    pd(res);
    return 0;
}
