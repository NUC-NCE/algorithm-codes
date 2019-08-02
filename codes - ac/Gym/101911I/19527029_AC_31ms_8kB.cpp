#include<bits/stdc++.h>

#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)

#define sd(a) scanf("%d",&a)
#define pd(a) printf("%d",a)

#define sld(a) scanf("%ld",&a)
#define pld(a) printf("%lld",a)

#define sf(a) scanf("%lf",&a)
#define pf(a) printf("%f",a)

using namespace std;
typedef long long ll;


int main()
{
    int n;
    sd(n);
    int x;
    sd(x);
    int maxn=x;
    int minn=x;
    rep(2,n,i){
        sd(x);
        maxn=max(maxn,x);
        minn=min(minn,x);
    }
    int ans=maxn-minn+1-n;
    pd(ans);
    puts("");
    return 0;
}
