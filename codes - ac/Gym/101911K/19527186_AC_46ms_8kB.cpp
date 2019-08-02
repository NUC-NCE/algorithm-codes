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
    int n,m;
    sd(n),sd(m);
    int x=0,y=0;
    int v;
    rep(1,n,i){
        sd(v);
        if(v<m)
            x++;
        else
            y++;
    }
    pd(max(0,y-x));
    puts("");
    return 0;
}
