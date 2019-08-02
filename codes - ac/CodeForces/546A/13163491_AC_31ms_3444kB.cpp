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

int main()
{
    ll k, n, w;
    ll a=0;
    cin >> k >> n >> w;
    cout << max(a, k*w*(w + 1) / 2 - n);
    return 0;
}