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
#define plf(d) printf("%.6lf\n",d);
#define eps 1e-5
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int t;
int n,m;
int a[110];
int main()
{
    sd(t);
    while(t--){
        sd(n),sd(m);
        rep(1,n,i)
            sd(a[i]);
        if(m>=n){
            puts("100");
            continue;
        }
        sort(a+1,a+n+1);
        int maxn=a[m+1]-1;
        rep(m+1,n,i)
            maxn=max(maxn,a[i]-a[i-m-1]-1);
        pd(maxn);
    }
    return 0;
}