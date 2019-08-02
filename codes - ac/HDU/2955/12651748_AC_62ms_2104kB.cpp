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
#define plf(d) printf("%.6lf\n",d)
#define eps 1e-5
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int t, n, m[51000];
double x, p[51000];
double dp[51000];
int main()
{
    sd(t);
    while(t--){
        slf(x),sd(n);
        int sum=0;
        rep(0,n-1,i){
            sd(m[i]),slf(p[i]);
            sum+=m[i];
        }
        me(dp,0);
        dp[0] = 1;
        rep(0,n-1,i)
            reps(sum,m[i],j)
                dp[j] = max(dp[j], dp[j - m[i]]*(1 - p[i]));
        reps(sum,0,i){
            if(dp[i]>(1-x)){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
