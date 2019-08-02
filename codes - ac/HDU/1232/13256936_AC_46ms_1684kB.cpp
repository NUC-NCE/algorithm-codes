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
int par[1100];
int n,m;
int fun(int x){
    if(x==par[x])
        return x;
    else
        return par[x]=fun(par[x]);
}
void unions(int u,int v){
    int x1=fun(u);
    int y1=fun(v);
    if(x1!=y1)
        par[y1]=x1;
}
int main()
{
    while(~sd(n)&&n){
        sd(m);
        me(par,0);
        rep(1,n,i)
            par[i]=i;
        while(m--){
            int x,y;
            sd(x),sd(y);
            unions(x,y);
        }
        int sum=0;
        rep(1,n,i)
            if(par[i]==i)
                sum++;
        pd(sum-1);
    }
    return 0;
}
