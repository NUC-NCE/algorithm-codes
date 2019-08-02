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
#define plf(d) printf("%.2lf\n",d)
#define eps 1
using namespace std;
typedef long long ll;
int a[11000];
int main(){
    int n;
    sd(n);
    rep(0,n-1,i)
        sd(a[i]);
    sort(a,a+n);
    pd(a[n/2]);
    return 0;
}
