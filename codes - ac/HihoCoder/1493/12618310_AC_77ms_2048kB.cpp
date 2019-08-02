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
int prime[1001000];
bool vis[1001000];
int len=0;
int maxn=1001000;
void get()
{
    me(vis,true);
    vis[0]=vis[1]=false;
    for(int i=2;i<maxn;i++)
    {
        if(vis[i])
        {
            prime[++ len] = i;
            for(int j=i*2;j<maxn;j+=i)
                vis[j]=false;
        }
    }
}

int main()
{
    int n;
    get();
    while(~sd(n)){
        rep(0,n,i){
            if(vis[n-prime[i]]){
                printf("%d %d\n",prime[i],n-prime[i]);
                break;
            }
        }
    }
    return 0;
}
