#include<cstdio>
#include<algorithm>
#include<cstring>
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
#define plf(d) printf("%.6lf\n",d);
#define eps 5e-3
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int maxn=1010;
int n,k;
double a[maxn],b[maxn],x[maxn];

bool check(double w){
    rep(0,n-1,i)
        x[i]=a[i]-b[i]*w;
    sort(x,x+n);
    double ans=0;
    rep(k,n-1,i)
        ans+=x[i];
    return ans>=0;
}

int main()
{
    while(~scanf("%d%d",&n,&k) && n){
        rep(0,n-1,i)
            slf(a[i]);
        rep(0,n-1,i)
            slf(b[i]);
        double l=0,r=1e9,m;
        rep(1,300,i){
            m=(l+r)/2;
            if(check(m))
                l=m;
            else
                r=m;
        }
        pd(int(100*(l+eps)));
    }
    return 0;
}
