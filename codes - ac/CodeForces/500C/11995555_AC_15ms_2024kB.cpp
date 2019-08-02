#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",&x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d);
using namespace std;
int w[505], b[1005];
bool vis[505];
int main()
{
    int n, m, ans = 0;
    sd(n),sd(m);
    rep(1,n,i)
        sd(w[i]);
    rep(1,m,i)
        sd(b[i]);
    rep(2,m,i)
    {
        me(vis,false);
        reps(i-1,1,j)
        {
            if(b[j] == b[i]) 
                break;
            if(!vis[b[j]])
            {
                ans += w[b[j]];
                vis[b[j]] = true;
            }
        }
    }
    pd(ans);
}
