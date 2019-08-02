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
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    ll ret=__gcd(x,y);
    x=x/ret;
    y=y/ret;
    a=a/x;
    b=b/y;
    cout<<min(a,b)<<endl;
    return 0;
}
