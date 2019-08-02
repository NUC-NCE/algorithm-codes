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
#define eps 1e-6
using namespace std;
typedef long long ll;
typedef struct{
    char zz[15];
    int a,b,c,d;
    char l,m,n,o;
    int pp;
}invention;
invention node[110000];
int searchs(invention m,int n)
{
    rep(0,n-1,i){
        if(node[i].a == m.a && node[i].b == m.b && node[i].c == m.c && node[i].d == m.d)
                return i;
    }
}
int main()
{
    int n,m;
    sd(n),sd(m);
    rep(0,n+m-1,i){
        scanf("%s%d%c%d%c%d%c%d%c",node[i].zz,&node[i].a,&node[i].l,&node[i].b,&node[i].m,&node[i].c,&node[i].n,&node[i].d,&node[i].o);
        if(i >= n)
                node[i].pp = searchs(node[i],n);
    }
    rep(n,m+n-1,i)
        printf("%s %d%c%d%c%d%c%d%c #%s\n",node[i].zz,node[i].a,node[i].l,node[i].b,node[i].m,node[i].c,node[i].n,node[i].d,node[i].o,node[node[i].pp].zz);
    return 0;
}